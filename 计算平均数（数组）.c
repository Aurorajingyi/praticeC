//计算平均数，并且输出大于平均数的数字，输入-1时停止输入 
//初次使用数组
#include<stdio.h>
int main(){
	int cnt;
	printf("请输入数字的个数：");
	scanf("%d",&cnt);
	
	//动态分配数组：让用户决定数组的长度，防止越界
	int number[cnt];  

	
	int x;
	int sum=0;
	printf("请输入数字（输入 -1 停止）：");
	scanf("%d",&x);
	
	int count=0; //数实际数组的个数，不能超过分配的cnt的个数
	 
	while(x!=-1){
		if(count<cnt){
			number[count]=x;
			count++;
			sum+=x;
			
			//输入下一个x
			printf("请输入下一个数字：");
		    scanf("%d",&x);
		} else{
			printf("已达到最大输入数量!\n");
			break; //退出循环 
		}				
	} 
	
	//算平均数
 	if(count>0){  //由于分母不能为0 
		double avg=0;
		avg=(double)sum/count; //强制类型转换 
	
		//判断大于平均数的数字并输出
		printf("大于平均数%.2f的数有：",avg);
		
		int i=0; //遍历number[0]到number[cnt-1]
		for(i;i<count;i++){
			if(number[i]>avg){
			printf("%d ",number[i]); //有个空格，把数字之间隔开 
			}
        } 
        printf("\n"); //输出换行 
	} else{
		printf("没有输入有效数字\n");
	}
	
	return 0;
} 
