#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* ptr = (int*)(&arr + 1);
	printf("%d %d\n", *(arr + 1), *(ptr - 1));
	return 0;
}


//int main()
//{
//	int x = 1, y = 012;
//	printf("%d", y * x++);
//	return 0;
//}

//int main()
//{
//	int j = 4;
//	int i = j;
//	for (; i <= 2 * j; i++)
//	{
//		switch (i / j)
//		{
//		case 0:
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("#");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char* b = (char*)&a;
//	printf("%08x,%08x", i, *b);
//	return 0;
//}

//int main()
//{
//	char str[] = "ABCDEFG";
//	char* p1, * p2;
//	p1 = "abcd"; p2 = "efgh";
//	strcpy(str + 1, p2 + 1);
//	strcpy(str + 3, p1 + 3);
//	printf("%s\n", str);
//	return 0;
//}

//int main()
//{
//	char a[] = "123456789", * p = a;
//	int i = 0;	
//	while (*p)
//	{
//		if (i % 2 == 0) *p = '!';
//		i++; p++;
//	}
//	puts(a);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 6,7,8,9,10 };
//	int* ptr = arr;
//	*(ptr++) += 123;
//	printf("%d,%d", *ptr, *(++ptr));
//
//	return 0;
//}

//int main()
//{
//	int k, j, s;
//	for (k = 2; k < 6; k++, k++)
//	{
//		s = 1;
//		for (j = k; j < 6; j++)
//			s += j;
//	} 
//	
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//		int a = 2, * p1, ** p2;
//		p2 = &p1;
//		p1 = &a;
//		a++;
//		printf("%d,%d,%d\n", a, *p1, **p2);
//
//	return 0;
//}