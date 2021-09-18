#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x, c, sum, i;
	for (x = 1; x <= 20; x++)
	{
		sum = x;
		c = x;
		for (i = 1; i <= 7; i++)
		{
			
			c = c * 2;
			sum += c;
			
			if (sum == 765)
			{
				printf("%d", x);
				break;
			}
		}
	}
	
	return 0;
}

//int main()
//{
//	double a = 1.0, b = 2.0, c, d, sum = 0.0;
//	int i, n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		d = b / a;
//		sum = sum + d;
//		c = b;
//		b = a + c;
//		a = c;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	char a[] = "abcdef";
//
//	printf("%d\n", my_strlen(a));
//
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	int sum = 0;
//
//	for (int i = 0; i < 8; i++)
//	{
//		sum += x;
//		x *= 2;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//int nums(int x)
//{
//	int sum = 0;
//	for (int i = 1; i <= 8; i++)
//	{
//		sum += x;
//		x *= 2;
//	}
//	return sum;
//}
//
//int main()
//{
//	for (int i = 1; ; i++)
//	{
//		if (nums(i) == 765)
//		{
//			printf("有%d盏灯\n", i);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	double sum = 0.0, mol = 1.0, den = 2.0, den2 = 2.0;
//
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum += (den2 / mol);
//		den2 += mol;
//		mol = den;
//		den = den2;
//	}
//	printf("%lf\n", sum);
//}

//int main()
//{
//	/*char str[10]; 
//	str = { "china!" };*/
//
//	char str[] = { "china!" };
//
//	//char str[10]; strcpy(str, "abcdefghijkl"
//
//
//	//char str[10] = { "abcdefghijkl" };*/
//
//	return 0;
//}
//struct user
//{
//	char name[20];
//	char password[8];
//};
//
//int main()
//{
//	int i, ret  = -2;
//	struct user u[5] = { { "zhangsan", "123abc" }, { "lisi", "abc123"}, { "wangwu", "1234abcd" }, { "zhaoliu", "1234abcd" }, { "laoqi", "abc1234" } };
//	char name_input[8];
//	char password_input[8];
//	printf("请输入用户名：>");
//	scanf("%s", &name_input);
//	for (i = 0; i < 5; i++)
//	{
//		if (strcmp(name_input, u[i].name) == 0)
//		{
//			printf("请输入密码：>");
//			scanf("%s", &password_input);
//			if (strcmp(password_input, u[i].password) == 0)
//			{
//				puts(name_input);
//				printf("登录成功！");
//				break;
//			}
//			else
//			{
//				printf("密码错误！");
//			}
//			break;
//		}
//		else
//		{
//			printf("该用户不存在！");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int** arr[10];
//	int(*arr[10]);
//	char* (*arr)[10];
//	char(*)arr[10];
//}

//int main()
//{
//	int n = 4;
//
//	for (n = 1; n <= 4; n++)
//	{
//		if (n == 1)
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 20;
//	int arr[20][20] = { 0 };
//
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if ((j == 0) || (j == i))
//			{
//				arr[i][j] = 1;
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//
//	return 0;
//}