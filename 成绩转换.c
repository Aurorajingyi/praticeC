//03-4. 成绩转换(15)
//本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：
//
//大于等于90分为A；
//小于90且大于等于80为B；
//小于80且大于等于70为C；
//小于70且大于等于60为D；
//小于60为E。
//输入格式：
//
//输入在一行中给出1个整数的百分制成绩。
//
//输出格式：
//
//在一行中输出对应的五分制成绩。
//
//输入样例：
//90
//输出样例：
//A
#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if(score>=90){
		printf("A");
    }else if(score<90 && score>=80){
    	printf("B");
	}else if(score<80 && score>=70){
		printf("C");
	}else if(score<70 && score>=60){
		printf("D");
	}else{
		printf("E");
	}
	return 0;
}
