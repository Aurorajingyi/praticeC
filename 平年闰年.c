#include<stdio.h>
#include<stdbool.h>

//新建一个数据结构 
struct date{
	int month;
	int day;
	int year;
};

//函数头 
bool isLeap(struct date d); //判断date的year是不是闰年 
int numberOfDays(struct date d); //判断date的day是不是一个月的最后一天 

int main()
{
	struct date today,tomorrow;
	
	//输入today的日期
	printf("Please enter today's date (mm dd yyyy):");
	scanf("%i %i %i",&today.month,&today.day,&today.year); 
	
	//如果date的day与本月的天数的一样，也就是说不是today的date不是本月的最后一天 
	 if(today.day!=numberOfDays(today)){
	 	tomorrow.day=today.day+1;
	 	tomorrow.month=today.month;
	 	tomorrow.year=today.year;
	 } else if(today.month==12){ //如果是本月的最后一天而且是12月的话 
	 	tomorrow.day=1;
	 	tomorrow.month=1;
	 	tomorrow.year=today.year+1;
	 } else{ //如果是本月的最后一天，但是不是12月的话 
	 	tomorrow.day=1;
	 	tomorrow.month=today.month+1;
	 	tomorrow.year=today.year;
	 }
	 
	 printf("Tomorrow's date is %i-%i-%i\n",tomorrow.year,tomorrow.month,tomorrow.day);
	 return 0;
}

int numberOfDays(struct date d) //函数头中定义了struct date d 
{
	int days; //设置变量day，表示这个月有几天 
	const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //用只读数组变量平年每个月的天数 
    if(d.month==2 && isLeap(d)){
    	days=29;
	} else {
		days=daysPerMonth[d.month-1];
	}
	return days;
}

bool isLeap(struct date d)
{
	bool Leap=false;
	if((d.year%4==0 &&d.year%100!=0) || d.year%400==0){
	    Leap=true;
	}
	return Leap;
}



