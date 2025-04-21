//井字棋游戏
//规则：X用1表示，O用0表示，X赢输出1，O赢输出0，没人赢输出-1
#include<stdio.h>
int main(){
	//初始化 
	const int size=3; //三行三列的井字棋
	int board[size][size];
	int i,j; //i表示行，j表示列
	int numberofX; //算X在每行或者每列或者对角线的个数，满三个就获胜 
	int numberofO; // 算O在每行或者每列或者对角线的个数
	int result=-1; //默认没有人赢 
	
	printf("请输入井字棋的布局，每行输入三个数字（1代表X，0代表O）：\n");
	//对board[size][size]进行初始化，读入矩阵 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]); //逐行读入 
		}
	}
	
	//逐行检查，看有没有人赢
	for(i=0;i<size;i++){
		numberofX=0;  //每检查完一行就重新赋值为0 
		numberofO=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				numberofX++;
			}else{
				numberofO++;
			}
		}
		//检查完一行就判断一下是否有人赢 
		if(numberofX==size){
			result=1;
			break;
		} else if(numberofO==size){
			result=0;
			break;
		}
	} 
	
	
	//逐列检查，看有没有人赢
	if(result==-1){
		for(j=0;j<size;j++){
			numberofX=0;  //每检查完一列就重新赋值为0 
			numberofO=0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numberofX++;
				}else{
					numberofO++;
				}
			}
			//检查完一列就判断一下是否有人赢 
			if(numberofX==size){
				result=1;
				break;
			} else if(numberofO==size){
				result=0;
				break;
			}
		} 
	}
	
	//检查主对角线[0][2],[1][1],[2][0]
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
		//判断输赢
		 if(numberofX==size){
		 	result=1;
		 }else if(numberofO==size){
		 	result=0;
		 }
	}
	
	//检查副对角线[0][0],[1][1],[2][2]
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
		//判断输赢
		 if(numberofX==size){
		 	result=1;
		 }else if(numberofO==size){
		 	result=0;
		 }
	} 
	
	//printf结果
	if(result==-1){
		printf("没有人赢\n");
	} else if(result==1){
		printf("X赢\n");
	} else{
		printf("O赢\n");
	}
	return 0;
} 
