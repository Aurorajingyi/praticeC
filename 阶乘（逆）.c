//�׳ˣ��棩
#include<stdio.h>
int main(){
	int n;
	int fact=1;//��ʼֵ���� 
	printf("������һ��n\n");
	scanf("%d",&n);
	int t=n; //�ñ���t����n�ĳ�ʼֵ 
	for(n;n>1;n--){
		fact*=n;
	}
	printf("%d�Ľ׳���%d\n",t,fact);
	return 0;
} 
