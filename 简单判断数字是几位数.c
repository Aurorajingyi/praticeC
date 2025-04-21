//determine how many digits a number has(a number with four digits or less)
#include<stdio.h>
int main(){
	int N;
	printf("Please enter a number:");
	scanf("%d",&N);
	if(N>999){
		printf("%d is a four-digit number\n",N);
	}else if(N>99){
		printf("%d is a three-digit number\n",N);
	}else if(N>9){
		printf("%d is a two-digit number\n",N);
	} else{
		printf("%d is a one digit number\n",N);
	}
	return 0;
}