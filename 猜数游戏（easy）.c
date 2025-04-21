//猜数游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1; //随机取出一个0-100的数
	printf("我已经想到了一个0-100的数字\n");
	int a; //用户输入的数字 
	int cnt=0;  //数用户一共输入了几次
	printf("请猜我输入的数字是什么？我会告诉你是大了还是小了，直至你猜中为止\n");
	do{
		scanf("%d",&a);
		cnt++;
		if(a>number){
			printf("你猜的数大了\n");
			}
			else if (a<number){
				printf("你猜的数小了\n");
			} 
	} while( a!= number);
	printf("你一共用了%d次猜中\n",cnt);
	return 0;
 } 
