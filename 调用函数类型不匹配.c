#include<stdio.h>
void cheer(int i){
	printf("cheer %d\n",i);
}

int main(){
	cheer(2.6); //隐含的2.6-2的转换，直接输出2，从double到int的转换 
	return 0;
}
