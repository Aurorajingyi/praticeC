//02-2. 然后是几点(15)
//有时候人们用四位数字表示一个时间，比如1106表示11点零6分。现在，你的程序要根据起始时间和流逝的时间计算出终止时间。
//读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，
//计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。当小时为个位数时，没有前导的零，即5点30分表示为530。
//注意，第二个数字表示的分钟数可能超过60，也可能是负数。
//
//输入格式：
//
//输入在一行中给出2个整数，分别是四位数字表示的起始时间、以及流逝的分钟数，其间以空格分隔。
//注意：在起始时间中，当小时为个位数时，没有前导的零，即5点30分表示为530；流逝的分钟数可能超过60，也可能是负数。
//
//输出格式：
//
//输出四位数字表示的终止时间。题目保证起始时间和终止时间在同一天内。（扩展的代码部分是跨天的） 
//
//输入样例：
//1120 110
//输出样例：
//1310



//思路：将输入的第一个整数拆开来，用取余和除数解决。第二个整数的分钟数加上第一个整数的分钟部分，取余60得到四个数字中最后两个数字。



/*有问题的代码如下：当输入0001 -2 答案是-1.没有对24小时这个情况处理*/ 
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	scanf("%d %d",&m,&n); //输入两个整数；
//	int i,j;
//	i=m/100; //不管是1106还是530这样的数字都可以得到11和5； 
//	j=m%100; //取余得到m的分钟部分 
//	int p,q; //p、q代表终止时间的小时部分和分钟部分 
//	p=i+(j+n)/60;
//	q=(j+n)%60;
//	int final;
//	final=p*100+q;
//	printf("%d",final);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int start_time, elapsed_minutes;
//	scanf("%d %d",&start_time,&elapsed_minutes);
//	
//	//把三位或者四位数的起始时间分成小时部分和分钟部分 
//	int start_hour,start_minutes;
//	start_hour=start_time/100;
//	start_minutes=start_time%100;
//	
//	// 计算终止时间的小时部分和分钟部分
//	int end_hour, end_minutes;
//	end_minutes=(start_minutes+elapsed_minutes) %60;
//	end_hour=start_hour+(start_minutes+elapsed_minutes)/60;
//	
//	//处理小时部分的进位
//	if(end_hour>=24){
//		end_hour-=24;//如果是25，hour为1 
//	} 
//	
//	//用四位整数表示终止时间，可能有两种写法 
//	//int end_time;
//	//end_time=end_hour*100+end_minutes; //这种写法如果是0020这种final，会没有小时部分 
//	//printf("%d",end_time); 
//	printf("%d%d",end_hour,end_minutes); //如果输入2350 20 输出结果是010，符合题意 
//	return 0;
//}


//以上的代码还可以继续优化，如果分钟部分有可能是负数，而原来的整数部分的分钟数不够呢？ （分钟部分可能为、跨天） 




#include <stdio.h>

int main() 
{
    int start_time, elapsed_minutes;
    scanf("%d %d", &start_time, &elapsed_minutes);
    
    // 把三位或者四位数的起始时间分成小时部分和分钟部分
    int start_hour = start_time / 100;
    int start_minutes = start_time % 100;
    
    // 计算终止时间的小时部分和分钟部分
    int end_hour, end_minutes;
    end_minutes = (start_minutes + elapsed_minutes) % 60;
    int carry_hours = (start_minutes + elapsed_minutes) / 60;
    
    if (end_minutes < 0) { // 处理负数分钟的情况
        end_minutes += 60;
        carry_hours--; // 借位一个小时
    }
    
    end_hour = (start_hour + carry_hours) % 24; //(start_hour + carry_hours) 如果小于 24，就不变，大于24，就算多出来的部分 
    if (end_hour < 0) { // 处理负数小时的情况
        end_hour += 24;
    }

    // 输出终止时间
    printf("%d%02d\n", end_hour, end_minutes); //在这条代码中，如果小时部分是个位数，输出时是没有前导零的。小数部分的0要存在，比如1130+30= 1200
    //printf("%02d%02d\n", end_hour, end_minutes); //这样是输出一个至少占据 2 位的整数，不足位的地方用零填充。 
    return 0;
}

