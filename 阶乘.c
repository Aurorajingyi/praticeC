//�׳ˣ�˳�� 
#include<stdio.h>
int main(){
	int n;
	printf("������һ��n��\n");
	scanf("%d",&n);
	int fact=1;
	int i;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d�Ľ׳���%d\n",n,fact);
	return 0;
}
