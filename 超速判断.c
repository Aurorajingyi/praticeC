//03-0. �����ж�(10)
//ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����
//
//�����ʽ��
//
//������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�
//
//�����ʽ��
//
//��һ���������������ʾ�������ʽΪ����Speed: V - S��������V�ǳ��٣�S������Speeding��������OK��
//
//��������1��
//40
//�������1��
//Speed: 40 - OK
//��������2��
//75
//�������2��
//Speed: 75 - Speeding

#include <stdio.h>
int main()
{
	int speed;
	scanf("%d",&speed);
	if(speed<=60){
		printf("Speed: %d - OK",speed);
	}else{
		printf("Speed: %d - Speeding",speed);
	}
	return 0;
}

