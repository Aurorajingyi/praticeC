//02-0. ������������(10)
//����Ҫ���д���򣬼���2���������ĺ͡�������̲��������Ŀ��֤��������ȫ�������ͷ�Χ�ڡ�
//
//�����ʽ��
//
//������һ���и���2��������A��B��
//
//�����ʽ��
//
//��4���а��ո�ʽ��A ����� B = �����˳������͡�������̡�
//
//����������
//3 2
//���������
//3 + 2 = 5
//3 - 2 = 1
//3 * 2 = 6
//3 / 2 = 1 

#include<stdio.h>
int main()
{
	int A,B;
	int Add,Subtract,Multiply,Divide;
	printf("������������������");
	scanf("%d %d",&A, &B);
	Add=A+B;
	Subtract=A-B;
	Multiply=A*B;
	Divide=A/B;
	printf("%d + %d = %d\n",A,B,Add);
	printf("%d - %d = %d\n",A,B,Subtract);
	printf("%d * %d = %d\n",A,B,Multiply);
	printf("%d / %d = %d\n",A,B,Divide);
	return 0;
}

