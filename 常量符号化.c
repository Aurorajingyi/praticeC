#include <stdio.h>

// ������ɫ����
enum { red = 0, yellow = 1, green = 2 };

int main() {
    int color = -1; // �洢�û��������ɫ����
    const char* colorName = NULL; // �洢��ɫ���ƣ���ʼ��Ϊ��ָ��
    
//Ϊʲô�����Խ�colorName�����Ͷ���Ϊ char* colorName
//colorName������Ϊchar*���ͣ�����switch����и�ֵ���������ַ�������������"red"��"yellow"������Щ�ַ���������������const char*��������char*��
//�ڱ����ϸ������£�����ܻᵼ�¾�������
//Ϊ�˽��������⣬����Խ�colorName����Ϊconst char*���ͣ���ƥ���ַ������������͡�


    // ��ʾ�û�������ɫ����
    printf("��������ϲ������ɫ�Ĵ��룺");
    // ��ȡ�û��������ɫ����
    scanf("%d", &color);

    // ������ɫ����ѡ���Ӧ����ɫ����
    switch (color) {
        case red: // �����ɫ����Ϊ0�������ɫ
            colorName = "red"; // ����ɫ��������Ϊ��ɫ
            break;
        case yellow:
            colorName = "yellow"; 
            break;
        case green: 
            colorName = "green"; 
            break;
        default: // �����ɫ���벻��0��1��2�е��κ�һ��
            colorName = "Unknown"; // ����ɫ��������Ϊδ֪
            break;
    }
    
	//colorName��һ��ָ�룬����ָ���ַ�����������C�����У��ַ���������ʵ��һ���ַ�����ĵ�ַ����ָ���������洢��ַ�ġ�
	//���Ե�����дcolorName = "red";ʱ��ʵ�����ǽ�ָ��colorNameָ�����ַ�������"red"�ĵ�ַ��
	
	//�����"red"��һ���ַ����������洢���ַ�'R'��'e'��'d'�Լ���β�Ŀ��ַ�('\0')��������ַ�������ʼ��ַ����"red"�ĵ�ַ��
	//�����ǰ�"red"����colorNameʱ��ʵ�����ǰ�colorNameָ����"red"����ַ��������ĵ�ַ�����colorNameָ�����ַ�������"red"��
	
	//��ȻcolorName��һ��ָ�룬��������ָ���ַ��������ĵ�ַ��������ǿ��԰��ַ�������ֱ�Ӹ�ֵ��colorName��


    // ����û���ϲ������ɫ����
    printf("����ϲ������ɫ��%s\n", colorName);

    return 0;
}

