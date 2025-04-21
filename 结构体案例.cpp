//学校正在做毕设项目，一个老师要带5个学生，总共三名老师，需求如下：设计学生和老师的结构体。
//在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员。学生的成员有姓名，考试分数。
//创建数组存放三名老师，通过函数给每个老师和所带的学生赋值，最终打印出老师的数据以及老师所带的学生的数据。

#include<iostream>
using namespace std;
#include<string.h>
#include<ctime> //使用随机数要包含的头文件
#include <cstdlib> // for rand() and srand()

//1、定义Student结构体：
struct Student {
	string name;
	int grade = 0;
};

//2、定义老师结构体
struct Teacher {
	string name;
	Student StuArrays[5];
};

//3、创建函数给每个老师和所带的学生赋值（给老师的数组开辟空间并给它赋值）
static void AllocateSpace(Teacher TeaArrays[], int len) {
	string namesSeed = "ABCDE";
	for (int i = 0;i < len;i++) {
		TeaArrays[i].name = "Teacher_";
		TeaArrays[i].name += namesSeed[i]; //追加字符串的第i个字符

		//通过循环给每名老师所带的5名学生赋值
		for (int j = 0;j < 5;j++) {
			TeaArrays[i].StuArrays[j].name = " Student_";//第i个老师的第j个学生
			TeaArrays[i].StuArrays[j].name += namesSeed[j];
			int random = rand() % 61 + 40; //成绩范围是1+40-60+40 ，41-100；
			TeaArrays[i].StuArrays[j].grade = random;
		}
	}
}

//4、打印出老师的数据以及老师所带的学生的数据
static void printInfo(Teacher TeaArrays[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "老师姓名：" << TeaArrays[i].name << endl;
		//循环打印第i名老师的第j名学生的信息
		for (int j = 0;j < 5;j++) {
			cout << "\t学生姓名：" << TeaArrays[i].StuArrays[j].name <<  //加一个“\t”，使得学生的信息从第二列开始输出
				"学生成绩：" << TeaArrays[i].StuArrays[j].grade << endl;
		}
	}
}
int main() {
	srand((unsigned int)time(NULL)); //让随机数真的像随机数，或者是srand((unsigned int)time(NULL);
	//创建数组存放三名老师
	Teacher TeaArrays[3];
	//3、创建函数给每个老师和所带的学生赋值
	int len = sizeof(TeaArrays) / sizeof(TeaArrays[0]);
	AllocateSpace(TeaArrays, len); //数组传入首地址，要对数组进行操作，一般要传递数组长度（方便循环遍历）
	//4、打印出老师的数据以及老师所带的学生的数据
	printInfo(TeaArrays, len);

	cout << "Press Enter to exit...";
	cin.get(); // 替代 system("pause")
	return 0;
}
