#include <stdio.h>
int main()
{
	do{
	
	int start_time,elapsed_time;
	scanf("%d %d",&start_time,&elapsed_time);
	
	//����ʼʱ��ֳ�Сʱ���ֺͷ��Ӳ��� (��������1150��580)
	int start_hour= start_time/100;
	int start_minutes= start_time%100;
	
	//������ʱ����������Сʱ���� 
	int end_minutes= (start_minutes+elapsed_time)%60;
	int carry_hour= (start_minutes+elapsed_time)/60;
	
	//������Ӳ��֣�����elapsed_time�Ǹ�����������ԭ����start_minutes����˸���
	if(end_minutes<0){
		end_minutes+=60;
		carry_hour--;
	}
	
	//����Сʱ���֣��п���С��0�����ߴ���24
	int end_hour;
	end_hour=(start_hour+carry_hour)%24; //�������24������
	
	if(end_hour<0){
		end_hour+=24;
	} 
	
	printf("%d%02d\n",end_hour,end_minutes);
	
	
	 // ѯ���û��Ƿ����(ѭ����Ϊ�˷�����Դ������Ч��)
    printf("�Ƿ�������ԣ�������1�������������������ַ��˳�����");
    int choice;
    scanf("%d", &choice); //ֻ������1��ʱ�򲻻�break������ѭ���� 

    if (choice != 1) {
        break;
    }
    //
    
    }while(1); 
    
	return 0;
}

