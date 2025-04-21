//阶乘（逆）
#include<stdio.h>
int main(){
	int n;
	int fact=1;//初始值！！ 
	printf("请输入一个n\n");
	scanf("%d",&n);
	int t=n; //用变量t保存n的初始值 
	for(n;n>1;n--){
		fact*=n;
	}
	printf("%d的阶乘是%d\n",t,fact);
	return 0;
} 
