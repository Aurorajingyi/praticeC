#include <stdio.h>
int main()
{
	do{
	
	int start_time,elapsed_time;
	scanf("%d %d",&start_time,&elapsed_time);
	
	//将起始时间分成小时部分和分钟部分 (假如输入1150，580)
	int start_hour= start_time/100;
	int start_minutes= start_time%100;
	
	//插入临时变量来处理小时部分 
	int end_minutes= (start_minutes+elapsed_time)%60;
	int carry_hour= (start_minutes+elapsed_time)/60;
	
	//处理分钟部分，假如elapsed_time是个负数，加上原本的start_minutes变成了负数
	if(end_minutes<0){
		end_minutes+=60;
		carry_hour--;
	}
	
	//处理小时部分，有可能小于0，或者大于24
	int end_hour;
	end_hour=(start_hour+carry_hour)%24; //解决大于24的问题
	
	if(end_hour<0){
		end_hour+=24;
	} 
	
	printf("%d%02d\n",end_hour,end_minutes);
	
	
	 // 询问用户是否继续(循环是为了方便测试代码的有效性)
    printf("是否继续测试？（输入1继续，输入其他任意字符退出）：");
    int choice;
    scanf("%d", &choice); //只有输入1的时候不会break（跳出循环） 

    if (choice != 1) {
        break;
    }
    //
    
    }while(1); 
    
	return 0;
}

