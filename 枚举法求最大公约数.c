//枚举法求最大公约数 
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int min;
	if(a<b){
		min=a;
	} else{
		min=b;
	}
	int i;
	int ret=0;//最大公约数 
	for (i=1;i<=min;i++){
		if(a%i==0){
			if(b%i==0){
				ret=i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d\n",a,b,ret);
	return 0;
}
