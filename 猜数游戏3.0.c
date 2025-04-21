//04-4. 猜数字游戏(15)
//猜数字游戏是令系统随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，
//并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。如果猜到，则结束程序。
//程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”；
//如果3次以内猜到该数，则提示“Lucky You!”；如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；
//如果超过N次都没有猜到，则提示“Game Over”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。

//输入格式：
//
//输入第一行中给出2个不超过100的正整数，分别是系统产生的随机数、以及猜测的最大次数N。随后每行给出一个用户的输入，直到出现负数为止。
//
//输出格式：
//
//在一行中输出每次猜测相应的结果，直到输出猜对的结果或“Game Over”则结束。

//人给了计算机一个随机数字，以及限制猜出的次数，让计算机去猜。1、理解题目意思；2、是否足够耐心和细心。 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1; //系统随机产生一个0-100的整数
	//int finish=1; //控制循环进出
	int cnt=0;//计数,先初始化 
	int x; //猜数 
	int N;//
	printf("number的大小是%d\n",number);//调试用的，看看number的大小 
	printf("请输入最多可以猜几次:\n");
	scanf("%d",&N);
	printf("计算机已经随机产生了一个1-100的数字，您现在可以猜想这个数是什么：");
	while(1){
		scanf("%d",&x);
		cnt++;
		if(x<0){
			printf("Game over!\n");
			break;
		}else if(x>number){
			printf("Too big\n");
		}else if (x<number) {
			printf("Too small\n");
		}else{ //猜中 
			if(cnt==1){
				printf("Bingo!\n");
			}else if(cnt<=3){
				printf("Lucky you!\n");
			}else{
				printf("Good Guess!\n");
		    }
			break;//猜中就退出 
		}
		
		if(cnt<N){
			printf("您可以继续猜想这个数是什么：");	
	    }else {
    		printf("Game over!\n");
    		break;
		}
	}
	return 0;
}
	
