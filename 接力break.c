//����break
#include<stdio.h>
int main(){
	int one, two, five;
	int x;
	scanf("%d",&x);
	int exit=0; //����ѭ����һ����־
	for(one=1;one<x*10/1;one++){
		for(two=1;two<=x*10/2;two++){
			for(five=1;five<=x*10/5;five++){
				if(one*1+two*2+five*5==x*10){
					printf("%dԪֽ�ҿ�����%d��1�ǣ�%d��2�ǣ�%d��5�����\n",x,one,two,five);
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
