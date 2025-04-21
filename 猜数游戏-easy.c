//《猜数游戏-easy版本》 
//让计算机来想一个数字，然后让用户来猜，计算机再告诉用户是大了还是小了，直到猜中为止，要告诉用户它猜了多少次。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//用time()可以产生一个随机整数
int main()
{
	srand(time(0));
	int number=rand()%100+1; //x%100得到x的范围是【0,n-1】
	int cnt=0;//计数
	int x;
	printf("请输入一个范围在0-100的整数:");
	do{
		scanf("%d",&x);
		cnt++;
		if(x>number){
			printf("猜的数大了\n");
			printf("请继续输入一个0-100的整数：");
		}
		else if (x<number){
			printf("猜的数小了\n"); 
			printf("请继续输入一个0-100的整数：");
		}else {
			printf("恭喜，猜中了！你一共猜想了%d次\n",cnt);
		}
	}while(x!=number); 
	return 0;
} 
 
