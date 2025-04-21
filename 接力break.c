//接力break
#include<stdio.h>
int main(){
	int one, two, five;
	int x;
	scanf("%d",&x);
	int exit=0; //控制循环的一个标志
	for(one=1;one<x*10/1;one++){
		for(two=1;two<=x*10/2;two++){
			for(five=1;five<=x*10/5;five++){
				if(one*1+two*2+five*5==x*10){
					printf("%d元纸币可以由%d张1角，%d张2角，%d张5角组成\n",x,one,two,five);
					exit=1;
					break;
				}
			}
			if(exit){
				break;
			}
		}
		if(exit){
			break;
		}
	}
	return 0; 
} 
