//���������桷 
//543����345��100����001 

//543%10=3
//543/10=54
// 
//54%10=4
//54/10=5
//
//5%10=5
//5/10=0 

#include<stdio.h>
int main()
{
	int x;
	printf("������һ��������");
	scanf("%d",&x);
	int digit;//ȡ������ÿһ������ 
	while(x>0){
		digit=x%10;
		printf("%d",digit);
		x/=10;
	}
	return 0;
}
