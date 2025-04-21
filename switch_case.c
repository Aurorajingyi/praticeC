#include<stdio.h>
int main(){
	int type;
	printf("please entre a number from 1,2,3:");
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("Hello!");
			break;
		case 2:
			printf("Good morning!");
			break;
		case 3:
			printf("Good afternoon!");
			break;
		default:
			printf("What?");
	}
	return 0;
}