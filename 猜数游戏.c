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
//
//输入样例：
//58 4
//70
//50
//56
//58

//输出样例：
//Too big
//Too small
//Too small
//Good Guess!
//人给了计算机一个随机数字，以及限制猜出的次数，让计算机去猜。1、理解题目意思；2、是否足够耐心和细心。 

#include<stdio.h>
int main()
{
	int number,n; //输入一个 随机数、以及猜测的最大次数N。
	int cnt=0; //计次
	int inp;//猜数
	int finish=0; //控制循环进出的
	scanf("%d %d",&number,&n);
	do{
		scanf("%d",&inp); //继续输入一个数 
		cnt++;
		if(inp<0){
			printf("Game over\n");
			finish=1;//退出循环； 
		}else if(inp>number){
			printf("Too big\n");
		}else if(inp<number){
			printf("Too small\n");
		}else{   //否则。即cnp=number，则要考虑计数的情况 
			if(cnt==1){
				printf("Bingo!\n");
			}else if(cnt<=3){
				printf("Lucky You!\n");
			}else {
				printf("Good Guess!\n");
			}
			finish=1; //退出循环；相当于break，下面那个if可以保障，cnt不会有>n的情况出现 
	    }
	    //特殊情况 
	   if(cnt==n) {
	   	 if(!finish){  //存在一种情况，在cnt==n的时候猜中了，要输出 Bingo!或者 Lucky You!或者Good Guess!此时finish=1，不再需要输出Game Over
	   	 	printf("Game Over\n");
	   	 	finish=1; //完成了cnt==n的情况，程序可以finish了 
			}
	   }		
	} while(!finish);//当没有finish的时候 
    return 0;
}
