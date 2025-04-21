//04-3. 统计素数并求和(20)
//本题要求统计给定整数M和N区间内素数的个数并对它们求和。
//
//输入格式：
//
//输入在一行中给出2个正整数M和N（1<=M<=N<=500）。
//
//输出格式：
//
//在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
//
//输入样例：
//10 31
//输出样例：
//7 143
//
//思路：求素数的方法：isPrime=1(假设为素数)

#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i;
	int isPrime=1;
	int cnt=0;
	int sum=0;
	 // 遍历区间内的每个数
	for(i=m;i<=n;i++){
		//判断素数 
		int k=2;
		for(k;k<i;k++){
			if(i%k==0){
				isPrime=0;// 假设当前数为素数
				break;// 跳出内层循环
			}
		isPrime=1;	
		}
		// 如果是素数，则更新计数和求和
	    if(isPrime){
	    cnt++;
		sum+=i;		
		}		
	}
	printf("%d %d",cnt,sum);
	return 0;
}

 
