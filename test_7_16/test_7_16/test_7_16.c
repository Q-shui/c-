#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int func()
{
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++) {
		k++;
	} 
	
	return k;
} 

int main()
{
	printf("%d\n", (func()));
}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//
//int main()
//{
//	printf("%d\n", f(1));
//}

//int main()
//{
//	int c[] = { 1, 3, 5 };
//	int* p = c + 1;
//
//	printf("%d", * (++p));
//
//	return 0;
//}

//void fun(int x, int y, int* c, int* d)
//{
//	*c = x + y;
//	*d = x - y;
//} 
//
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n", c, d);
//
//	return 0;
//}

//int f(int x, int y)
//{
//	return (x & y) + ((x ^ y) >> 1);
//} 
//
//int main()
//{
//	int result = f(2, 4);
//	printf("%d\n", result);
//	return 0;
//}

//int main()
//{
//	const int i = 0;
//	int* j = (int*)&i;
//	*j = 1;
//	printf("%d,%d", i, *j);
//
//	return 0;
//}

//int main()
//{
//	unsigned char a = 0xA5;
//	unsigned char b = ~a >> 4 + 1;
//	printf("%d\n", b);
//	return 0;
//}

//int fun(char* s)
//{
//	char* p = s;
//	while (*p != '\0') {
//		p++;
//	} 
//	return(p - s);
//} 
//
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	} 
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	printf("%d, %d\n", sizeof(i++), i);
//	return 0;
//}

//char* myString()
//{
//	char buffer[6] = { 0 };
//	char* s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer) - 1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//	 
//int main()
//	{
//		printf("%s\n", myString());
//		return 0;
//	}

//int main()
//{
//	char* str[3] = { "stra","strb","strc" };
//	char* p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	} 
//	
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);
//	return 0;
//}

//#define MIN(x,y) x < y?x:y
//
//int main()
//{
//	printf("%d", MIN(2, 3));
//}

//int main()
//{
//	int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	} 
//	
//	printf("%d %d", a, x);
//	return 0;
//}

//union X{
//int x;
//char y[4];
//}a;
//int main()
//{
//	a.x = 0x11223344;
//
//	return 0;
//}

//int main()
//{
//	printf("%d", 1 << 3 + 2);
//
//	return 0;
//}

//void Func(char str_arg[2])
//{
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	printf("%d\n", m);
//	printf("%d\n", n);
//} 
//
//int main(void)
//{
//	char str[] = "Hello";
//	Func(str);
//}

//int main()
//{
//	unsigned long ulA = 0x11000000;
//	printf("%x\n", *(unsigned char*)&ulA);
//	return 0;
//}

//int main()
//{
//	char* pcColor = "blue1";
//	char acColor[] = "blue1";
//
//	printf("%d", strlen(pcColor));
//	printf("%d", strlen(acColor));
//	printf("%d", sizeof(pcColor));
//	printf("%d", sizeof(acColor));
//
//	return 0;
//}

//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	switch (++x)
//	{
//	case 0: ++x;
//	case 1: ++x;
//	case 2: ++x;
//	}
//
//	printf("%d", x);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i > 0) || (++j > 0)) {
//		printf("i=%d;j=%d\n", i, j);
//	}
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main() {
//	test();
//	printf("%d\n", a);
//
//	return 0;
//}

//int x = 3;
//
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	
//		printf("%d", x);
//	return;
//} 
//
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++) {
//		inc();
//	} 
//	
//	return 0;
//}

//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//} 
//
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++) {
//		k = f(a++);
//	}
//	
//	printf("%d\n", k);
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	printf("%d",++(a++));
//
//
//	return 0;
//}

//int fun(int x)
//{
//	int count = 0;
//	while (x) 
//	{
//		count++;
//		x = x & (x - 1);
//	} 
//	return count;
//}
//
//
//
//int main()
//{
//	
//	printf("fun(2017)=%d\n", fun(2019));
//
//	return 0;
//}