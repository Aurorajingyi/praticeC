//阶乘（顺） 
#include<stdio.h>
int main(){
	int n;
	printf("请输入一个n：\n");
	scanf("%d",&n);
	int fact=1;
	int i;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d的阶乘是%d\n",n,fact);
	return 0;
}
