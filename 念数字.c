//05-2. ������(15)
//����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ���������fu���֡�ʮ�����ֶ�Ӧ��ƴ�����£�
//
//0: ling
//1: yi
//2: er
//3: san
//4: si
//5: wu
//6: liu
//7: qi
//8: ba
//9: jiu
//�����ʽ��
//
//������һ���и���һ���������磺1234��
//
//��ʾ�������������������������
//
//�����ʽ��
//
//��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո���yi er san si��
//
//����������
//-600
//���������
//fu liu ling ling
//˼·�������������������������switch case.��ĩû�пո� �����ʱ��if��䴦��
//      1234/1000=1; 1234%1000=234; 1000/10=100; 
//	  234/100=2; 234%100=34;  100/10=10;
//	  34/10=3;   34%10=4      10/10=1;(��Ȼ�пո񣬼�mask>=10��ʱ��)
//	  4/1=4��    4%1=0��      1/10=0������mask>0ʵ��ѭ���� 
//	  
//	

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("fu ");
		n=-n;
	}
	
	//ȷ��n�Ǽ�λ�� 
	int mask=1;
	int i=1; 
	//��ֹ�ƻ�n
	int p=n; 
	while(p>9){
		p/=10;
		mask*=10;
	}
	//���������
	int t;//tΪÿһλ�ϵ����� 
	while(mask>0){
		t=n/mask;
		n=n%mask;
		mask/=10;
		switch(t){
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
		}
		if(mask>0){
			printf(" ");
		}	
	} 
	return 0;
}
