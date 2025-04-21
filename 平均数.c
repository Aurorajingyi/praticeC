//算平均数，读到number=-1,停止累加
#include<stdio.h>
int main()
{
	int number;
	int sum=0;
	double Ave=0.0;//平均数 
	scanf("%d",&number);
	int cnt=0;
	while(number!=-1){
		sum+=number;
		cnt++;
		scanf("%d",&number);
	}
	printf("总和为%d\n",sum);
	Ave=1.0*sum/cnt;
	printf("平均数为%f\n",Ave);
	return 0;
}
