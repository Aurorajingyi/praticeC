//������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1; //���ȡ��һ��0-100����
	printf("���Ѿ��뵽��һ��0-100������\n");
	int a; //�û���������� 
	int cnt=0;  //���û�һ�������˼���
	printf("����������������ʲô���һ�������Ǵ��˻���С�ˣ�ֱ�������Ϊֹ\n");
	do{
		scanf("%d",&a);
		cnt++;
		if(a>number){
			printf("��µ�������\n");
			}
			else if (a<number){
				printf("��µ���С��\n");
			} 
	} while( a!= number);
	printf("��һ������%d�β���\n",cnt);
	return 0;
 } 
