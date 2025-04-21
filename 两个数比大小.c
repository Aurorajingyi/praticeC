#include<stdio.h>
int main(){
	int a,b; 
	printf("Please enter two numbers:");
	scanf("%d %d",&a,&b);
	int max=a;
	if(b>a){
		max=b;
	}
	printf("The max number is %d\n",max);
	return 0;
}