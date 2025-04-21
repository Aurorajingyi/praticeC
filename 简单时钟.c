#include <stdio.h>
int main(){
	int time_begin;
	int passtime;
	printf("please enter the begin time and the pass time:");
	scanf("%d %d",&time_begin,&passtime);
	
	int begin_hour = time_begin/100;
	int begin_minutes =  time_begin%100;
	
	int end_minutes = (begin_minutes+passtime)%60;
	int end_hour =begin_hour + (begin_minutes+passtime)/60;
	
	printf("the end_time is:%d%d",end_hour,end_minutes); 
	return 0;
}  