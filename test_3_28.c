#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//求一组数中的最大值
	int arr[] = { 1,2,3,4,5,6,7,9,10 };
	int max = arr[0];//一般把max定义成数组中的一个值，如果初始化为0，碰到负数不好判断
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[1]);
	for (int i = 1; i <= sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
//打印9*9=乘法表时为了对齐打印方式可以是printf("%d*%d=%2d ",i,j,i*j
//%2d是输出两位数如果是个位数则用空格代替
//而%-2d则是让其右对齐
//goto语句，可以跳到程序指定的地方
	printf("hello\n");
	goto again;
	printf("ha\n");
again:
	printf("he\n");//此时ha就会被跳过，不会打印
//goto语句实用于多嵌套情形
//例如
//for(...)
//{ 	  for(...)
//		  {
// 				for(...)
// 	            {
//                   if(disaster)
// 	                      goto error;
// 	             }
//         }
//}
//eror:	
//	if(disaster)
//处理错误情况
	
	
	`
	return 0;
}
