#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//函数
//判断一个数是不是素数
void sushu(int x)
{
	int i;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			break;
	}
	if (i < x)
	{
		printf("这个数是素数\n");
	}
	else
		printf("这个数不是素数\n");
}
//判断这年是不是闰年
void runnian(int x)
{
	if (x % 4 == 0 && x % 100 == 0 && x % 400 != 0)
	{
		printf("这年是闰年\n");
	}
	else
	{
		printf("这年不是闰年\n");
	}
}

int main()
{
	int a, b, c;
	char arr[] = { 0 };
	scanf("%d%d", &a, &b);
	sushu(a);
	runnian(b);
	shuzuchazhao(arr, c);
	return 0;
}