//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int my_strlen1(char* str)
//{
//	int len = 0;
//	while (*str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", my_strlen1(arr));
//	return 0;
//}
//#include <stdio.h>
//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	if (n > 2)
//	{
//
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//int a[2][] = { {0,1,2},{3,4,5} };
//int a[][3] = { {0,1,2},{3,4,5} };
//int a[2][4] = { {0,1,2},{3,4},{5} };
//int a[][3] = { {0,,2},{},{3,4,5} };
//#include <stdio.h>
//int main()
//{
//	//第一题
//	int a = 3, b = 4, c = 5;
//	float x = 1.2, y = 2.4, z = -3.6;
//	long int u = 51274, n = 128765;
//	char c1 = 'a', c2 = 'b';
//	printf("a=%2d  b=%2d  c=%d\n", a, b, c);
//	printf("x=%8.6f,y=%8.6f,z=%8.6f\n", x, y, z);
//	printf("x+y=%6.4f  y+z=%4.2f  z+x=%4.2f\n", x + y, y + z, x + z);
//	printf("c1='%c' or %d\nc2='%c' or %d", c1, c1, c2, c2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x,a,b,c,sum,acc;
//	scanf("%d", &x);
//	if (x < 100 || x>1000)
//	{
//		printf("输入错误\n");
//	}
//	else
//	{
//		a = x / 100;
//		b = (x % 100) / 10;
//		c = x % 10;
//		sum = a + b + c;
//		acc = a * b * c;
//	}
//	printf("sum=%d  acc=%d", sum, acc);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int m = 12, n = 34;
	printf("%d%d", m++, ++n);
	printf("%d%d", n++, ++m);
	return 0;
}
//#include <stdio.h>
//#define pi 3.1415926
//int main()
//{
//	double r, d, s;
//	scanf("%lf", &r);
//	d = 2 * pi * r;
//	s = pi * r * r;
//	printf("d=%lf s=%lf", d, s);
//	return 0;
//}
//





