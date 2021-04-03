#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//判断闰年的修正
int binary_search(int k,int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <+ right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+1;
			
		}
		else if (arr[mid] > k)
		{
			right = mid-1;
			
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
void ADD(int* p)
{
	*p += 1;//不能使用*p++，这种运算的优先级较高，高于解引用操作符，可以使用（*p）++
}
int main()
{
	for (int a = 1000; a <= 2000; a++)
	{
		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
			printf("%d ", a);
	}
	printf("\n");
//不要在函数内部使用打印函数，让函数有一定的独立性
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	int sz = sizeof(arr) / sizeof(arr[1]);
	scanf("%d", &k);
	int ret = binary_search(k, arr,sz);
	if (-1 != ret)
		printf("找到了，下标是%d\n", ret);
	else
		printf("未找到\n");
//数组传参的时候无法再用函数内部求数组长度
//在传递给函数数组的时候，传递过去的是首元素的地址，此时arr是个指针
//所以要主动传输进去数组的长度

//从函数内部改变函数外部的值时，需要传输指针变量
	int num = 0;
	int* p = &num;
	ADD(p);
	printf("%d\n", num);
	ADD(p);
	printf("%d\n", num);

	
	return 0;
}