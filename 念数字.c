//05-2. 念数字(15)
//输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：
//
//0: ling
//1: yi
//2: er
//3: san
//4: si
//5: wu
//6: liu
//7: qi
//8: ba
//9: jiu
//输入格式：
//
//输入在一行中给出一个整数，如：1234。
//
//提示：整数包括负数、零和正数。
//
//输出格式：
//
//在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如yi er san si。
//
//输入样例：
//-600
//输出样例：
//fu liu ling ling
//思路：负数单独处理，正序拆开整数。switch case.行末没有空格？ 正序拆开时用if语句处理。
//      1234/1000=1; 1234%1000=234; 1000/10=100; 
//	  234/100=2; 234%100=34;  100/10=10;
//	  34/10=3;   34%10=4      10/10=1;(仍然有空格，即mask>=10的时候)
//	  4/1=4；    4%1=0；      1/10=0；（当mask>0实现循环） 
//	  
//	

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("fu ");
		n=-n;
	}
	
	//确定n是几位数 
	int mask=1;
	int i=1; 
	//防止破坏n
	int p=n; 
	while(p>9){
		p/=10;
		mask*=10;
	}
	//正序拆开整数
	int t;//t为每一位上的数字 
	while(mask>0){
		t=n/mask;
		n=n%mask;
		mask/=10;
		switch(t){
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
		}
		if(mask>0){
			printf(" ");
		}	
	} 
	return 0;
}
