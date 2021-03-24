#pragma once
#include <stdio.h>
int jc(int x)
{
	int i = 1, q = 1;
	for (i = 1; i <= x; i++)
	{
		q *= i;
		
	}
	return q;
}
int main()
{
	//计算n的阶乘
	
	for (int a = 1,b = 1; a <= 10; a++)
	{
		b =b*a;
		printf("%d\n",b);
	}
	int sum = 0;
	//
	for (int m = 1; m <= 10; m++)
	{
		;
		sum += jc(m) ;

	}
	printf("%d\n", sum);
	int n = 0, sum1 = 0, jc = 0, q = 0;
	for (n = 1,sum1 = 0 ; n <= 10; n++)
	{
		for (q = 1,jc = 1; q <= n; q++)
		{
			jc *= q;
		}
		sum1 += jc;
		
	}
	printf("%d\n", sum1);
	//优化
	for (int l = 1, sum2 = 0, jc2 = 1; l <= 10; l++)
	{
		jc2 *= l;
		sum2 += jc2;
		printf("%d\n", sum2);
	}
	
	return 0;
}
