#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void shuzuchazhao(int arr[10], int x)
{
	int left, right;
	left = 0, right = sizeof(arr) / sizeof(arr[1]) - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{

		if (x < arr[mid])
		{
			right = mid;
		}
		else if (x > arr[mid])
		{
			left = mid;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("找到了，下标是%d", mid);
	}
	if (left > right)
	{
		printf("未找到\n");
	}
}
int main()
{
	int arr[10];
	int a;
	//输入10个数放入数组
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &a);
	shuzuchazhao(arr[10], a);
	return 0;
}
