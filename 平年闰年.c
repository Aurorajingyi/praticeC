#include<stdio.h>
#include<stdbool.h>

//�½�һ�����ݽṹ 
struct date{
	int month;
	int day;
	int year;
};

//����ͷ 
bool isLeap(struct date d); //�ж�date��year�ǲ������� 
int numberOfDays(struct date d); //�ж�date��day�ǲ���һ���µ����һ�� 

int main()
{
	struct date today,tomorrow;
	
	//����today������
	printf("Please enter today's date (mm dd yyyy):");
	scanf("%i %i %i",&today.month,&today.day,&today.year); 
	
	//���date��day�뱾�µ�������һ����Ҳ����˵����today��date���Ǳ��µ����һ�� 
	 if(today.day!=numberOfDays(today)){
	 	tomorrow.day=today.day+1;
	 	tomorrow.month=today.month;
	 	tomorrow.year=today.year;
	 } else if(today.month==12){ //����Ǳ��µ����һ�������12�µĻ� 
	 	tomorrow.day=1;
	 	tomorrow.month=1;
	 	tomorrow.year=today.year+1;
	 } else{ //����Ǳ��µ����һ�죬���ǲ���12�µĻ� 
	 	tomorrow.day=1;
	 	tomorrow.month=today.month+1;
	 	tomorrow.year=today.year;
	 }
	 
	 printf("Tomorrow's date is %i-%i-%i\n",tomorrow.year,tomorrow.month,tomorrow.day);
	 return 0;
}

int numberOfDays(struct date d) //����ͷ�ж�����struct date d 
{
	int days; //���ñ���day����ʾ������м��� 
	const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //��ֻ���������ƽ��ÿ���µ����� 
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



