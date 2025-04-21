//log2X
//8/2=4
//4/2=2
//2/2=1
//1/2=0
#include<stdio.h>
int main()
{
	int x;
	int ret=0;
	scanf("%d",&x);
	int t=x;
	while(x>1){
		x/=2;
		ret++;
	}
	printf("以2为底%d的对数是%d",t,ret);
	return 0;
}
