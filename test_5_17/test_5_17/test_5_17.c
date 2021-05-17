#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };//存的是首字符地址
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}


//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}


//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	
//	printf("%x,%x", ptr1[-1], *ptr2);
//	
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////结构体类型指针大小是20个字节
//int main()
//{
//	p = 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d%d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//int main()
//{
//	//整型数组
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16-数组大小
//	//printf("%d\n", sizeof(a + 0));//4-指针大小
//	//printf("%d\n", sizeof(*a));//4-元素大小
//	//printf("%d\n", sizeof(a + 1));//4-地址大小
//	//printf("%d\n", sizeof(a[1]));//4-元素大小
//	//printf("%d\n", sizeof(&a));//4-地址大小
//	//printf("%d\n", sizeof(*&a));//16-数组大小
//	//printf("%d\n", sizeof(&a + 1));//4-地址大小
//	//printf("%d\n", sizeof(&a[0]));//4-地址大小
//	//printf("%d\n", sizeof(&a[0] + 1));//4-地址大小
//
//	//字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6-数组大小
//	//printf("%d\n", sizeof(arr + 0));//4-地址大小
//	//printf("%d\n", sizeof(*arr));//1-元素大小
//	//printf("%d\n", sizeof(arr[1]));//1-元素大小
//	//printf("%d\n", sizeof(&arr));//4-地址大小
//	//printf("%d\n", sizeof(&arr + 1));//4-地址大小
//	//printf("%d\n", sizeof(&arr[0] + 1));//4-地址大小
//	//printf("%d\n", strlen(arr));//随机值-字符串长度，遇到\0停止
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7-数组大小
//	//printf("%d\n", sizeof(arr + 0));//4-指针大小
//	//printf("%d\n", sizeof(*arr));//1-首元素大小
//	//printf("%d\n", sizeof(arr[1]));//1-下标为1的元素大小
//	//printf("%d\n", sizeof(&arr));//4-地址大小
//	//printf("%d\n", sizeof(&arr + 1));//4-地址大小
//	//printf("%d\n", sizeof(&arr[0] + 1));//4-第二个元素的大小
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//12
//	//printf("%d\n", strlen(&arr[0] + 1));//15
//
//	//char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p + 1));//4;
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));
//	////printf("%d\n", strlen(p[0]));//非法访问内存
//	//printf("%d\n", strlen(&p));//3
//	//printf("%d\n", strlen(&p + 1));//11
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//二维数组
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//48
//	////printf("%d\n", sizeof(a[0][0]));
//	//printf("%d\n", sizeof(a[0]));//16
//	//printf("%d\n", sizeof(a[0] + 1));//4
//	////printf("%d\n", sizeof(*(a[0] + 1)));
//	//printf("%d\n", sizeof(a + 1));//4
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	//printf("%d\n", sizeof(*a));//16
//	//printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}

////指针
//// 回调函数-通过函数指针调用的函数
//// 冒泡排序函数
//
//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//比较//
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


// qsort-可以排任意类型的数据
// void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
// 参数
// 1.数组名
// 2.数组中元素个数
// 3.数组中的元素大小
// 4.函数指针Z.比较两个元素的大小
//QUICK SORT快速排序
// void型指针-无类型指针
// 不能进行解引用，加加减减的操作
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//void test2()
//{
//	float f[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//void cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20}, {"lisi",30}, {"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//void test4()
//{
//	struct stu s[3] = { {"zhangsan",20}, {"lisi",30}, {"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test1();
//	printf("\n");
//
//	test2();
//	printf("\n");
//
//	test3();
//	printf("\n");
//
//	test4();
//	printf("\n");
//
//	return 0;
//}
//void Bubblesort(int arr[], int sz)
//{
//	int temp;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}//只能排整型数组
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void print(char* str)
//{
//	printf("%s", str);
//}
//
//void test(void (*p)(char*))//指针传参-传递函数指针
//{
//	printf("test\n");
//	p("hello");//调用函数
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}
////指向函数指针数组的指针
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10];//整型数组
//	int* p = &arr;//取出数组地址-数组指针
//	int(*pf)(int, int);//函数指针
//	int (*pfarr[4])(int, int);//指针数组
//	int (*(*ppfarr)[4])(int, int) = &pfarr;//*ppfarr是个数组指针,指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是个函数指针int(*)(int, int)
//
//	return 0;
//}
//int main()
//{
//
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}