#include<stdio.h>

//声明了一个叫point的结构类型
struct point{
	int x;
	int y;
};


struct point* getStruct(struct point*);
void output(struct point);
void try(struct point);
void print(const struct point *p);

int main()
{
	struct point y={0,0}; //创建了一个point结构类型的变量y，并初始化 
	getStruct(&y); //调用 getStruct 函数，将y结构体的地址传递给它
	output(y);//将 y 结构体作为参数传递给它。
	try(*getStruct(&y));//运行getStruct(&y)，这里要再次输入x,y,返回的是struct point的p，*getStruct(&y)是p所指的变量 
	print(getStruct(&y)); //运行getStruct(&y)，这里要再次输入x,y,getStruct得到的指针传给print 
}

//参数 p指针 将指向 y 结构体的地址。getStruct(&y);
//常见套路，传进来一个指针，在内部对指针所指的东西进行处理后，又把指针返回出去 
//好处是可以串在其他函数的调用之中 
struct point* getStruct(struct point*p)
{
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("getStruct:%d,%d\n",p->x,p->y);
	return p; //返回一个 struct point的变量p 
}
//由于 p 是指向 y 的地址，因此 p->x 和 p->y 分别表示 y 结构体的 x 和 y 成员。

void output(struct point p) //参数是结构本身，不是指针 
{
	printf("output:%d,%d\n",p.x,p.y);
}
//output 函数会打印 y 结构体中的 x 和 y 成员的值。由于 y 结构体在 getStruct 函数中被更新过，因此这里打印的值是最新的用户输入。

void try(struct point p)
{
	printf("此处有运行吗\n"); 
	printf("try:%d,%d\n",p.x,p.y);
}

//这里是只读的，不能对p进行修改 
void print(const struct point *p)
{
	printf("print:%d,%d\n",p->x,p->y);
}



