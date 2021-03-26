#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int MAX(int a, int b)
{
	int t = 0;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	return a, b;
	
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", sum(a));
	}
	//求两个数的最大公约数
	//辗转相除法
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int q = 0;
	MAX(m, n);
	while (m % n != 0)
	{
		q = m % n;
		m = n;
		n = q;
	}
	if (m % n == 0)
	{
		printf("%d\n", n);
	}
	//试除法求素数
	//求100以内的素数
	//这种算法效率较差
	int o = 0,p = 0;
	for (o = 1; o <= 100; o++)
	{
		for(p = 2;p<o;p++)
		{
			if (o % p == 0)
				break;
		}
		if (p == o)
		{
			printf("%d \n", o);
		}
	}
	//如果一个数不是素数，那么其可以写成两个数相乘即i = a*b
	//	且a，b中必有一个小于等于开平方i
	int w = 0, e = 0;
	for (w = 1; w <= 100; w++)
	{
		for (e = 2; e <= sqrt(w); e++)
		{
			if (w % e == 0)
			{
				break;
			}
		}
		if (e > sqrt(w))
		{
			printf("%d \n", w);
		}
	}
	//这个代码的运行次数明显降低
	//考虑到偶数不是素数可以将代码改为：
	int s = 0, d = 0;
	for (s = 1; s < 100; s += 2)
	{
		for (d = 2; d < sqrt(s); d++)		
		{
			if (s % d == 0)
				break;
		}
		if (d > sqrt(s))
		{
			printf("%d \n", s);
		}
	}
	return 0;
}

