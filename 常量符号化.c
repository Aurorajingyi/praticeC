#include <stdio.h>

// 定义颜色常量
enum { red = 0, yellow = 1, green = 2 };

int main() {
    int color = -1; // 存储用户输入的颜色代码
    const char* colorName = NULL; // 存储颜色名称，初始化为空指针
    
//为什么不可以将colorName的类型定义为 char* colorName
//colorName被声明为char*类型，但在switch语句中赋值给它的是字符串常量（例如"red"、"yellow"），这些字符串常量的类型是const char*，而不是char*。
//在编译严格的情况下，这可能会导致警告或错误。
//为了解决这个问题，你可以将colorName声明为const char*类型，以匹配字符串常量的类型。


    // 提示用户输入颜色代码
    printf("请输入你喜欢的颜色的代码：");
    // 读取用户输入的颜色代码
    scanf("%d", &color);

    // 根据颜色代码选择对应的颜色名称
    switch (color) {
        case red: // 如果颜色代码为0，代表红色
            colorName = "red"; // 将颜色名称设置为红色
            break;
        case yellow:
            colorName = "yellow"; 
            break;
        case green: 
            colorName = "green"; 
            break;
        default: // 如果颜色代码不是0、1、2中的任何一个
            colorName = "Unknown"; // 将颜色名称设置为未知
            break;
    }
    
	//colorName是一个指针，用于指向字符串常量。在C语言中，字符串常量其实是一个字符数组的地址，而指针是用来存储地址的。
	//所以当我们写colorName = "red";时，实际上是将指针colorName指向了字符串常量"red"的地址。
	
	//这里的"red"是一个字符串常量，存储着字符'R'、'e'、'd'以及结尾的空字符('\0')，而这个字符串的起始地址就是"red"的地址。
	//当我们把"red"赋给colorName时，实际上是把colorName指向了"red"这个字符串常量的地址，因此colorName指向了字符串常量"red"。
	
	//虽然colorName是一个指针，但它可以指向字符串常量的地址，因此我们可以把字符串常量直接赋值给colorName。


    // 输出用户最喜欢的颜色名称
    printf("你最喜欢的颜色是%s\n", colorName);

    return 0;
}

