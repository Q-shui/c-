#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//指针
//// 指针数组,存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10];//整型数组
//	int* arr2[3] = { &a, &b, &c };//指针数组
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr2[i]);
//	}
//	return 0;
//}
//// 二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//int** 最右边的*代表着是个指针，指向int*；
//	printf("%d", **ppa);//二级指针解引用
//	return 0;
//}
//// 指针和数组
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//虽然值一样。但意义不一样
//	printf("%p\n", &arr + 1);//数组地址加一跳过一个数组的字节
//
//	//一般认为arr就是数组首元素地址
//	//但也有例外
//	//1.&arr表示的是整个数组的地址
//	//2.sizeof(arr)测量的是整个数组的长度
//	return 0;
//}
////指针减指针
//// 求字符串长度
//int mystrlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	printf("%d", &arr[9] - &arr[0]);//9
//	//只能数组中元素相减，在同一块空间
//	return 0;
//}
// 指针+-整数
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;//p++;
//	}
//	return 0;
//}
//int main()
//{
//	////指针初始化
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL - 用来初始化指针，给指针赋值
//	//小心指针越界
//	//指针所指空间释放，要置NULL
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//释放指针
//	//只有当指针不是空指针的时候才能用
//
//	return 0;
//}
//#include <math.h>
////int main()
////{
////	int a = pow(2, 3);
////	printf("%d", a);
////	return 0;
////}
//void Judge(int i)
//{
//	int count = 0, s = 0;
//	int j = i;
//	int k = i;
//	while (j != 0)
//	{
//		count++;
//		j /= 10;
//	}
//	while(k != 0)
//	{
//		s += pow((k % 10), count);
//		k /= 10;
//	}
//	if (s == i)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 10000; i++)
//	{
//		Judge(i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, n, i, s;
//	printf("请输入a(0-10)，n的值：>");
//	scanf("%d%d", &a, &n);
//	int sum = a;
//	for (i = 1, s = a; i < n; i++)
//	{
//		s = a + s * 10;
//		sum += s;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i, arr[5];
//	int* pa = arr;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//}
//int main()
//{
//	int i = 1234;
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//		}
//		i /= 2;
//	}
//	printf("%d\n", count);
//}
//void my_print(int n)
//
//{
//	int i = 0;
//	printf(" 打印奇数位\n");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("打印偶数位\n");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//
//}
//int main()
//{
//	int num = 1234;
//	int count = 0;
//	my_print(num);
//	return 0;
//}

//int main()
//{
//	int a = 0b1010101011001;
//	int l,i;
//	for (i = 0; i < 32; i++)
//	{
//		if (a < 2 ^ (i + 1) && a > 2 ^ (i - 1))
//		{
//			l = i;
//		}
//	}
//	for (i = l; i > 0; i--)
//	{
//		if (i % 2 == 1)
//		{
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, s, count = 0;
//	scanf("%d%d", &a, &b);
//	s = a ^ b;
//	while (s != 0)
//	{
//		count++;
//		s = s & (s - 1);
//	}
//	printf("%d", count);
//}
//int Judge(int a, int b)
//{
//	int max, min, count = 0;
//	if (a > b)
//	{
//		max = a;
//		min = b;
//	}
//	else
//	{
//		max = b;
//		min = a;
//	}
//	while (min)
//	{
//		if ((min % 2) != (max % 2))
//		{
//			count++;
//		}
//		min /= 2;
//		max /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d",Judge(a, b));
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//指针
//int main()
//{
//
//	return 0;
//}
//// 野指针
// 规避野指针：
// 1指针变量初始化
// 2小心指针越界
// 3
//int* test()
//{
//	int a = 20;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//	//指针指向的空间释放
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//	//指针越界导致的野指针
//}
//int main()
//{
//	//int a;//局部变量不初始化，默认为随机值
//	int* p;//局部的指针变量，被初始化为随机值
//	*p = 20;//随即找到一个地方存放20；
//	return 0;
//}//未初始化
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;//数组名-首元素地址
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//16843009 16843009 257 0 0 0 0 0 0 0
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//向后偏移4个字节
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//向后偏移1个字节
//
//	return 0;
//}
////指针类型决定指针向前或向后走一步的距离有多大
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pa = &a;
//	*pa = 0;
//	/*char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	printf("%d\n", *pa);
//	printf("%d\n", *pc);*/
//
//	return 0;
//}
//指针类型决定了进行解引用操作的时候能够访问空间的大小
// int* p *p能访问4个字节
// char* p 1
// double* p 8
// short* p 2
//指数从内存中取出
//int main()
//{
//
//	return 0;
//}
////E不全为0或不全为1
////这时，浮点数就采用下面的规则表示，即指数E的计算值减去127（或1023），得到真实值，再将有效数字M前
////加上第一位的1。 比如： 0.5（1 / 2）的二进制形式为0.1，由于规定正数部分必须为1，即将小数点右移1位，
////则为1.0 * 2 ^ (-1)，其阶码为 - 1 + 127 = 126，表示为01111110，而尾数1.0去掉整数部分为0，补齐0到23位
////00000000000000000000000，则其二进制表示形式为:
////E全为0
////这时，浮点数的指数E等于1 - 127（或者1 - 1023）即为真实值， 有效数字M不再加上第一位的1，而是还原为
////0.xxxxxx的小数。这样做是为了表示±0，以及接近于0的很小的数字。
////E全为1
////这时，如果有效数字M全为0，表示±无穷大（正负取决于符号位s）
