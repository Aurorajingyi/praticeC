#include<stdio.h>

//������һ����point�Ľṹ����
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
	struct point y={0,0}; //������һ��point�ṹ���͵ı���y������ʼ�� 
	getStruct(&y); //���� getStruct ��������y�ṹ��ĵ�ַ���ݸ���
	output(y);//�� y �ṹ����Ϊ�������ݸ�����
	try(*getStruct(&y));//����getStruct(&y)������Ҫ�ٴ�����x,y,���ص���struct point��p��*getStruct(&y)��p��ָ�ı��� 
	print(getStruct(&y)); //����getStruct(&y)������Ҫ�ٴ�����x,y,getStruct�õ���ָ�봫��print 
}

//���� pָ�� ��ָ�� y �ṹ��ĵ�ַ��getStruct(&y);
//������·��������һ��ָ�룬���ڲ���ָ����ָ�Ķ������д�����ְ�ָ�뷵�س�ȥ 
//�ô��ǿ��Դ������������ĵ���֮�� 
struct point* getStruct(struct point*p)
{
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("getStruct:%d,%d\n",p->x,p->y);
	return p; //����һ�� struct point�ı���p 
}
//���� p ��ָ�� y �ĵ�ַ����� p->x �� p->y �ֱ��ʾ y �ṹ��� x �� y ��Ա��

void output(struct point p) //�����ǽṹ��������ָ�� 
{
	printf("output:%d,%d\n",p.x,p.y);
}
//output �������ӡ y �ṹ���е� x �� y ��Ա��ֵ������ y �ṹ���� getStruct �����б����¹�����������ӡ��ֵ�����µ��û����롣

void try(struct point p)
{
	printf("�˴���������\n"); 
	printf("try:%d,%d\n",p.x,p.y);
}

//������ֻ���ģ����ܶ�p�����޸� 
void print(const struct point *p)
{
	printf("print:%d,%d\n",p->x,p->y);
}



