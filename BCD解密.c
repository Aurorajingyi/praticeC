#include<stdio.h>
int main(){
	//convert decimal to hexadecimal
	//like: how to reverse 18 to 12?
	
	int N;
	printf("Please enter a number:");
	scanf("%d",&N);
	int a,b;
	a=N/16;
	b=N%16;
	printf("BCD number of %d is %d%d\n",N,a,b);
	return 0;
}