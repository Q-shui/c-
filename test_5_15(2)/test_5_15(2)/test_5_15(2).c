#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//指针详解
// 指针数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr[4] = { &a, &b, &c, &d };
	for (int i = 0; i < 4; i++)
	{

		printf("%d ", *arr[i]);
	}
	return 0;
}
//int main()
//{
//	int a[10];//整型数组
//	char c[5];//字符数组
//	int* pa[10];//存放整形指针的数组-指针数组
//
//	return 0;
//}
////字符指针
//int main()
//{
//    char str1[] = "hello bit.";//这两个数组在不同的空间
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";//这两个常量字符串相同，所以没必要用两个空间；
//    char* str4 = "hello bit.";
//    if (str1 == str2)//可以理解为地址的比较
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//int main()
//{
//	char* p = "abcdef";//常量字符串不能被改变
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//常量字符串
//	char* pc = arr;//存放的只是首字符的地址
//	//存放首字符的地址，通过这个地址找到所在空间，遇到\0停止
//	printf("%s\n", arr);
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	return 0;
//}