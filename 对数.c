//logarithm
/* 
log2X;
X=1; ret=0; x/2=0,ret=-1+1=0; 
X=2; ret=1; x/2=1 1/2=0 ret=-1+1+1=1
X=44; ret=2; 
*/

#include<stdio.h>
int main(){
	int X=0; //initialization
	int ret=-1; //or set ret=0,while(x>1)
	printf("Please enter a X:");
	scanf("%d",&X);
	int t=X;
	while(X>0){
		X/=2;
		ret++;
	}
	printf("log2 of %d is %d",t,ret);
	return 0;
}

