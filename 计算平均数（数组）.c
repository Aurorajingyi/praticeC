//����ƽ�����������������ƽ���������֣�����-1ʱֹͣ���� 
//����ʹ������
#include<stdio.h>
int main(){
	int cnt;
	printf("���������ֵĸ�����");
	scanf("%d",&cnt);
	
	//��̬�������飺���û���������ĳ��ȣ���ֹԽ��
	int number[cnt];  

	
	int x;
	int sum=0;
	printf("���������֣����� -1 ֹͣ����");
	scanf("%d",&x);
	
	int count=0; //��ʵ������ĸ��������ܳ��������cnt�ĸ���
	 
	while(x!=-1){
		if(count<cnt){
			number[count]=x;
			count++;
			sum+=x;
			
			//������һ��x
			printf("��������һ�����֣�");
		    scanf("%d",&x);
		} else{
			printf("�Ѵﵽ�����������!\n");
			break; //�˳�ѭ�� 
		}				
	} 
	
	//��ƽ����
 	if(count>0){  //���ڷ�ĸ����Ϊ0 
		double avg=0;
		avg=(double)sum/count; //ǿ������ת�� 
	
		//�жϴ���ƽ���������ֲ����
		printf("����ƽ����%.2f�����У�",avg);
		
		int i=0; //����number[0]��number[cnt-1]
		for(i;i<count;i++){
			if(number[i]>avg){
			printf("%d ",number[i]); //�и��ո񣬰�����֮����� 
			}
        } 
        printf("\n"); //������� 
	} else{
		printf("û��������Ч����\n");
	}
	
	return 0;
} 
