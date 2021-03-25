#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//在一个有序数组中查找某个具体的数字n，编写int binsearch(int x,int v[],int n)功能
//在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//写一个代码，在arr数组中(有序的)找到7
	int i = 0, sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);
			break;
		}
		if (i == sz)
			printf("找不到\n");
	}
	//对于有序数组，遍历的方法效率低
	//可以采用折半查找的方式
	//折半查找代码
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("没找到\n");
	}
	//二分查找时，注重左标和右标
	//定义一个中间值为左标右标的平均值
	//如果k小于中间值，则右标变为中间值-1，k大于中间值左标变为中间值+1
	//如此循环直到找到等于k的下标
	//while条件的判断
	//在查找的过程中，如果数组没有要查找的量，在二分时会有左标和右标相差1的情形
	//此时再循环一次左标右边相邻，而所查找的值在此之外，再一次，两者相等，直到左标大于右标
	//此时循环结束
	//故while条件为左标小于等于右标
	return 0;
}
