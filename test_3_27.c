#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//打印1-100中含有9的数字
int main()
{
	int count = 0,i = 0,a = 0,b = 0;
	for(i = 1; i <= 100; i++)
	{
		if(i % 10 == 9)
		{
			printf("%d\n", i);
			count++;
		}
		if(i / 10 == 9)
		{
			printf("%d\n",i);
			count++;
		}
		
	}
	printf("count = %d\n",count);
//计算1/1-1/2+1/3-1/4+1/5。。-1/100的值
	double sum = 0.0;//所求的和为小数所以要定义浮点型数字，且后面初始化的值为0.0
	int flag = 1;//改变符号
	for (i = 1; i <= 100; i++)
	{
		sum += (flag)*1.0 / i;//为了使sum为小数，分子要为浮点型
		flag = -flag;//符号变化
	}
	printf("%lf\n", sum);
//输出9*9乘法表
	for (i = 1; i <= 9; i++)
	{
		for (a = 1; a <= i; a++)
		{
			b = a * i;
			printf("%d*%d = %d ", a, i, b);
		}
		printf("\n");
	}
//
	return 0;
}
