//��������������������
#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i,j,k;
	i=a;
	int cnt=0;//�������У�ÿ��6������ 
	while(i<=a+3){
		j=a;
		while(j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j && i!=k && j!=k){
					printf("%d%d%d",i,j,k);
					cnt++;
					if(cnt%6==0){
						printf("\n");
					}else{
						printf(" ");
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
} 
