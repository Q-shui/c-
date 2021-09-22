#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 4, b = 3, * p, * q, * w;
//	p = &a;
//	q = &b;
//	w = q;
//	q = NULL;
//
//	*q = 0;
//	*p = a;
//	*p = *w;
//	w = p;
//
//	return 0;
//}

//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//int Change(int* pX)
//{
//	int y = 8;
//	y = y - *pX;
//	pX =& y;
//	return 0;
//} 
//
//int main()
//{
//	int xx = 3;
//	int* pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1, 2,3 , 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = a;
//
//	printf("%d", *(pa + 1));
//
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d,", k);
//	k = fun(j, m);
//	printf("%d/n", k);
//	return 0;
//}

//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 5,
//	A1,
//	B1
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//
//	printf("%d %d", enumA, enumB);
//
//	return 0;
//}

//struct tagTest1
//{
//	short a;
//	char d;
//	long b;
//	long c;
//};
//struct tagTest2
//{
//	long b;
//	short c;
//	char d;
//	long a;
//};
//struct tagTest3
//{
//	short c;
//	long b;
//	char d;
//	long a;
//};
//
//
//int main()
//{
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//
//	return 0;
//}

//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10) {
//		sum = sum + 1;
//		i++;
//	} 
//	printf("i=%d,sum=%d",i, sum);
//
//	return 0;
//}

//int main()
//{
//	int* px[10];
//
//	return 0;
//}

//#define F(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}

//int main()
//{
//	char a[20];
//	char* p1 = (char*)a;
//	char* p2 = (char*)(a + 5);
//	int n = p2 - p1;
//
//	printf("%d", n);
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello\0abcde";
//	char str2[15] = { '\0' };
//
//	strcpy(str2, str1);
//
//	printf("%d, %d", strlen(str1), strlen(str2));
//
//	return 0;
//}

//int main()
//{
//	int x = 2, z = 2, y = 3;
//	if (x > y)
//		z = 1;
//	else if (x == y)
//		z = 0;
//	else
//		z = -1;
//
//	printf("%d", z);
//
//	return 0;
//}

//int main()
//{
//	double** a[3][4];
//
//	printf("%d", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
//	}
//	else
//	{
//		printf("%d", a++);
//	}
//
//	return 0;
//}