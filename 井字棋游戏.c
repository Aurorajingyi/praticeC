//��������Ϸ
//����X��1��ʾ��O��0��ʾ��XӮ���1��OӮ���0��û��Ӯ���-1
#include<stdio.h>
int main(){
	//��ʼ�� 
	const int size=3; //�������еľ�����
	int board[size][size];
	int i,j; //i��ʾ�У�j��ʾ��
	int numberofX; //��X��ÿ�л���ÿ�л��߶Խ��ߵĸ������������ͻ�ʤ 
	int numberofO; // ��O��ÿ�л���ÿ�л��߶Խ��ߵĸ���
	int result=-1; //Ĭ��û����Ӯ 
	
	printf("�����뾮����Ĳ��֣�ÿ�������������֣�1����X��0����O����\n");
	//��board[size][size]���г�ʼ����������� 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]); //���ж��� 
		}
	}
	
	//���м�飬����û����Ӯ
	for(i=0;i<size;i++){
		numberofX=0;  //ÿ�����һ�о����¸�ֵΪ0 
		numberofO=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				numberofX++;
			}else{
				numberofO++;
			}
		}
		//�����һ�о��ж�һ���Ƿ�����Ӯ 
		if(numberofX==size){
			result=1;
			break;
		} else if(numberofO==size){
			result=0;
			break;
		}
	} 
	
	
	//���м�飬����û����Ӯ
	if(result==-1){
		for(j=0;j<size;j++){
			numberofX=0;  //ÿ�����һ�о����¸�ֵΪ0 
			numberofO=0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numberofX++;
				}else{
					numberofO++;
				}
			}
			//�����һ�о��ж�һ���Ƿ�����Ӯ 
			if(numberofX==size){
				result=1;
				break;
			} else if(numberofO==size){
				result=0;
				break;
			}
		} 
	}
	
	//������Խ���[0][2],[1][1],[2][0]
	if(result==-1){
		numberofX=0;
		numberofO=0;
		for(i=0;i<size;i++){
			if(board[i][size-1-i]==1){
				numberofX++;
			}else{
				numberofO++;
			}
		}
		//�ж���Ӯ
		 if(numberofX==size){
		 	result=1;
		 }else if(numberofO==size){
		 	result=0;
		 }
	}
	
	//��鸱�Խ���[0][0],[1][1],[2][2]
	if(result==-1){
		numberofX=0;
		numberofO=0;
		for(i=0;i<size;i++){
			if(board[i][i]==1){
				numberofX++;
			}else{
				numberofO++;
			}
		}
		//�ж���Ӯ
		 if(numberofX==size){
		 	result=1;
		 }else if(numberofO==size){
		 	result=0;
		 }
	} 
	
	//printf���
	if(result==-1){
		printf("û����Ӯ\n");
	} else if(result==1){
		printf("XӮ\n");
	} else{
		printf("OӮ\n");
	}
	return 0;
} 
