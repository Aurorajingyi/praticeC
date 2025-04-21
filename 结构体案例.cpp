//ѧУ������������Ŀ��һ����ʦҪ��5��ѧ�����ܹ�������ʦ���������£����ѧ������ʦ�Ľṹ�塣
//����ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��ѧ���ĳ�Ա�����������Է�����
//����������������ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ�����մ�ӡ����ʦ�������Լ���ʦ������ѧ�������ݡ�

#include<iostream>
using namespace std;
#include<string.h>
#include<ctime> //ʹ�������Ҫ������ͷ�ļ�
#include <cstdlib> // for rand() and srand()

//1������Student�ṹ�壺
struct Student {
	string name;
	int grade = 0;
};

//2��������ʦ�ṹ��
struct Teacher {
	string name;
	Student StuArrays[5];
};

//3������������ÿ����ʦ��������ѧ����ֵ������ʦ�����鿪�ٿռ䲢������ֵ��
static void AllocateSpace(Teacher TeaArrays[], int len) {
	string namesSeed = "ABCDE";
	for (int i = 0;i < len;i++) {
		TeaArrays[i].name = "Teacher_";
		TeaArrays[i].name += namesSeed[i]; //׷���ַ����ĵ�i���ַ�

		//ͨ��ѭ����ÿ����ʦ������5��ѧ����ֵ
		for (int j = 0;j < 5;j++) {
			TeaArrays[i].StuArrays[j].name = " Student_";//��i����ʦ�ĵ�j��ѧ��
			TeaArrays[i].StuArrays[j].name += namesSeed[j];
			int random = rand() % 61 + 40; //�ɼ���Χ��1+40-60+40 ��41-100��
			TeaArrays[i].StuArrays[j].grade = random;
		}
	}
}

//4����ӡ����ʦ�������Լ���ʦ������ѧ��������
static void printInfo(Teacher TeaArrays[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "��ʦ������" << TeaArrays[i].name << endl;
		//ѭ����ӡ��i����ʦ�ĵ�j��ѧ������Ϣ
		for (int j = 0;j < 5;j++) {
			cout << "\tѧ��������" << TeaArrays[i].StuArrays[j].name <<  //��һ����\t����ʹ��ѧ������Ϣ�ӵڶ��п�ʼ���
				"ѧ���ɼ���" << TeaArrays[i].StuArrays[j].grade << endl;
		}
	}
}
int main() {
	srand((unsigned int)time(NULL)); //�������������������������srand((unsigned int)time(NULL);
	//����������������ʦ
	Teacher TeaArrays[3];
	//3������������ÿ����ʦ��������ѧ����ֵ
	int len = sizeof(TeaArrays) / sizeof(TeaArrays[0]);
	AllocateSpace(TeaArrays, len); //���鴫���׵�ַ��Ҫ��������в�����һ��Ҫ�������鳤�ȣ�����ѭ��������
	//4����ӡ����ʦ�������Լ���ʦ������ѧ��������
	printInfo(TeaArrays, len);

	cout << "Press Enter to exit...";
	cin.get(); // ��� system("pause")
	return 0;
}
