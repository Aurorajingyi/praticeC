//��ƽ����������number=-1,ֹͣ�ۼ�
#include<stdio.h>
int main()
{
	int number;
	int sum=0;
	double Ave=0.0;//ƽ���� 
	scanf("%d",&number);
	int cnt=0;
	while(number!=-1){
		sum+=number;
		cnt++;
		scanf("%d",&number);
	}
	printf("�ܺ�Ϊ%d\n",sum);
	Ave=1.0*sum/cnt;
	printf("ƽ����Ϊ%f\n",Ave);
	return 0;
}
