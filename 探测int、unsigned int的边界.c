//#include <stdio.h>
//int main()
//{
//	unsigned int a=1;
//	while(a!=0){
//		a++;
//	}
//	printf("unsigned int 数据类型最大值是%u\n",a-1);
//	return 0;
//}

//或者是： 
#include <stdio.h>
int main()
{
	int a=0;
	do{
		++a;
	}while(a>0);
	printf("int 数据类型最大值是%d\n",a-1);
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int a=0;
//	while(++a>0){
//		;
//	}
//	printf("int 数据类型最大值是%d\n",a-1);
//	return 0;
//}


