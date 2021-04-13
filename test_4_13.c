//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,5,2,8,23,88,45,45,78,29 };
//	int i = 0;
//	int a = sizeof(arr) / sizeof(arr[0]) - 1;
//	int max = arr[0];
//	for (i = 0; i <= a; i++)
//	{
//		
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ",max);
//	return 0;
//}
//int main()
//{
//	float sum =0;
//	int i = 0, j = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += j * (1.0 / i);
//		j = -j;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int i =0,j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			j += 1;
//		}
//		if (i / 10 == 9)
//		{
//			j += 1;
//		}
//	}
//	printf("%d\n", j);
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//void lookup_prime_number(int x)
//{
//	int i;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			break;
//		}
//	}
//	if (i == x)
//	{
//		printf("%d ", x);
//	}
//}
//int main()
//{
//	int pn;
//	for (pn = 100; pn <= 200; pn++)
//	{
//		lookup_prime_number(pn);
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//void rank_3(int x, int y, int z)
//{
//	int t;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x < z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("%d %d %d\n", x, y, z);
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	rank_3(a, b, c);
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}
//void C_divisor(int a, int b)
//{
//	int i = 0;
//	if (a < b)
//	{
//		int t;
//		t = b;
//		b = a;
//		a = t;
//	}
//	while (a % b != 0)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	printf("%d\n", b);
//}
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	C_divisor(x, y);
//	return 0;
//}
//#pragma once
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////猜数字游戏
////电脑随机生成一个数字
////自己猜，猜大了电脑会说大了，猜小了电脑会说小了，猜对了会说对了
////且能持续进行（出现菜单，选择再来一把还是退出
//void menu()
//{
//	printf("**********************************\n");
//	printf("****    1.play    0.exit    ******\n");
//	printf("*********    2.提示    ***********\n");
//	printf("*********    3.规则    ***********\n");
//	printf("**********************************\n");
//}//定义一个开始菜单
//void game()
//{
//	int r;
//	int g;
//	//但此时两次游戏间数值相差过小，所以需要放在主函数中就行了 srand((unsigned long) time(NULL));//时间戳，其数值是当前时间减去1970.1.1.0:0:0后换算成秒
//	r = rand() % 100 + 1;//生成一个随机数，需要调用函数<stdio.h>，但此时随机数会根据程序的退出与进入而不变
//	//所以需要一个函数来防止这种情况
//	//模100+1生成1-100之间的数
//	while (1)
//	{
//		printf("请开始猜测:>");
//		scanf("%d", &g);
//		if (g < r)
//			printf("猜小了\n");
//		else if (g > r)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int s = 0;
//
//	do//结束游戏后选择是否再次开始，并且刚开始程序已经执行了一次，故用do。。。while循环
//	{
//		srand((unsigned long)time(NULL));
//		menu();
//		printf("请选择：>");
//		scanf("%d", &s);//选择输入数字
//		switch (s)//switch语句根据不同情况输出不同结果
//		{
//		case 1:game(); break;
//		case 0:printf("退出程序\n"); break;
//		case 2:printf("二分法\n"); break;
//		case 3:printf("随机生成1-100的数字，需要你进行猜测，在猜的过程中会给你提示，直到猜对\n"); break;
//		default:printf("选择错误\n"); break;
//		}
//	} 	while (s);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,12,26,38,49,50,60,78,86,96,97,98 };
//	int k = 50;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("未找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d", mid);
//	}
//	return 0;
//}
