#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//结构体

//结构体内存对齐

//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//
//VS中默认的值为8
//Linux中的默认值为4
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所
//有最大对齐数（含嵌套结构体的对齐数）的整数倍。

int main()
{


	return 0;
}

//struct s1
//{
//	char a;
//	int b;
//	char c;
//};
//
//struct s2
//{
//	char a;
//	char b;
//	int c;
//};
//
//int main()
//{
//	struct s1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//
//	struct s2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//
//	return 0;
//}