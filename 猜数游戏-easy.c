//��������Ϸ-easy�汾�� 
//�ü��������һ�����֣�Ȼ�����û����£�������ٸ����û��Ǵ��˻���С�ˣ�ֱ������Ϊֹ��Ҫ�����û������˶��ٴΡ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��time()���Բ���һ���������
int main()
{
	srand(time(0));
	int number=rand()%100+1; //x%100�õ�x�ķ�Χ�ǡ�0,n-1��
	int cnt=0;//����
	int x;
	printf("������һ����Χ��0-100������:");
	do{
		scanf("%d",&x);
		cnt++;
		if(x>number){
			printf("�µ�������\n");
			printf("���������һ��0-100��������");
		}
		else if (x<number){
			printf("�µ���С��\n"); 
			printf("���������һ��0-100��������");
		}else {
			printf("��ϲ�������ˣ���һ��������%d��\n",cnt);
		}
	}while(x!=number); 
	return 0;
} 
 
