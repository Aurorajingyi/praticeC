#include<stdio.h>
int main(){
	const int AMOUNT =100;
	printf("please enter the price of the goods:");
	int price;
	scanf("%d",&price);
	
	int change = AMOUNT-price;
	printf("give back:%d\n",change);
	return 0;
}