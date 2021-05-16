#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//指针
// 回调函数
//// 函数指针数组
//
//void menu()
//{
//	printf("**********************\n");
//	printf("***  1.add  2.sub  ***\n");
//	printf("***  3.mul  4.div  ***\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x, y;
//	int(*parr[5])(int, int) = { 0, add, sub, mul, div };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", parr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x, y;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);//重复太多
//	return 0;
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	int(*pa)(int, int) = ADD;
//	//需要一个数组，来存放四个函数的指针
//	int(*parr[4])(int, int) = { ADD, Sub, Mul, Div };//函数指针的数组
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", (*parr[i])(6, 3));
//	}
//	return 0;
//}
//// 函数指针-指向函数的指针
//int ADD(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", ADD(a, b));
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);//两个结果一样
//	//&函数名，和函数名地址一样
//	int(*pa)(int, int) = &ADD;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));//结果都一样
//
//	return 0;
//}
//int main()
//{
//	(*(void(*)())0)();
//	void (*signal(int, void(*)(int)))(int);
//	typedef void(*pfun_t)(int);//注意重命名的位置
//	pfun_t(signal(int, pfun_t));
//	return 0;
//}
//int ADD(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", ADD(a, b));
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);//两个结果一样
//	//&函数名，和函数名地址一样
//	int(*pa)(int, int) = &ADD;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//// 数组参数-指针参数 
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}//可以传一级指针的地址，也可以传二级指针，还可以传指针数组的地址
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	int* arr[10];
//	test(arr);
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test1(int* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test1(&a);//直接传地址
//	test1(p);//传指针
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void(test(int arr[3][5]))
//{
//
//}
//void test1(int arr[][5])
//{
//
//}void test3(int(*arr)[5])
//{
//
//}
////void test2(int arr[3][])
////{
////
////}//列不能省略
//int main()
//{
//	int arr[3][5];
//	test(arr);
//	test1(arr);
//	//test2(arr);
//	test3(arr);
//	return 0;
//}
	//void test(int arr[])//ok
	//{}
	//void test(int arr[10])//ok
	//{}
	//void test(int* arr)//ok
	//{}
	//void test2(int* arr[20])//ok
	//{}
	//void test2(int** arr)//ok
	//{}
	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int* arr2[20] = { 0 };
	//	test(arr);
	//	test2(arr2);
	//}
//// 数组指针-指针
// int arr[5]//整型数组
// int *arr1[10]//指针数组
// int (*parr2)[10]//数组指针
// int (*parr3[10])[5]//
//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = i + j;
//		}
//	}
//	print1(arr, 3, 5);//arr-数组名-首元素地址-先把二维数组想象成一维数组;所以传过去的是首个一维数组地址
//	print2(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	int(*p)[10] = &arr;
//	int* pa = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//int* p = NULL;//整形指针  |
//	//char* pc = NULL;//字符指针|存放地址
//	////数组指针-指向数组的指针-存放数组地址
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//int* p[10] = &arr;//指针数组
//	int(*p)[10] = &arr;//数组指针
//	//[]的结合性比*要高
//	char* arr1[10];
//	char* (*pa)[10] = &arr1;
//	//*pa说明这是个指针，[5]说明指向的数组有5个元素，char* 说明指向的数组元素类型是char*
//
//	return 0;
//}
////指针数组
//// int* arr1[10]//整形指针的数组
//// char* arr2[5]//一级字符指针数组
//// char** arr3[5]//二级字符指针数组
////int main()
////{
////	int arr1[] = { 1, 2, 3, 4, 5 };
////	int arr2[] = { 2, 3, 4, 5, 6 };
////	int arr3[] = { 3, 4, 5, 6, 7 };
////	int* parr[] = { arr1, arr2, arr3 };
////	for (int i = 0; i < 3; i++)
////	{
////		for (int j = 0; j < 5; j++)
////		{
////			printf("%d ", *(parr[i] + j));
////		}
////		printf("\n");
////	}
////	return 0;
////}