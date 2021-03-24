#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int c = 0;
	int d = 0;
	int i = 0;//循环变量的初始化
	while (i < 10)//条件判断
	{
		printf("%d\n", i);
		i++;//变量的调整
	}
	//当内容较多时，int，while，与调整之间的距离太大
	//对代码进行调整时容易出错
	//此时需要for循环
	//语法形式
	//for(表达式1;表达式2;表达式3)
	//	循环语句
	//表达式1为初始化部分，用来初始化循环变量，
	//表达式2为条件判断，判断循环什么时候终止
	//表达式3为调整部分
	//用for循环打印1-10
	for (int i1 = 1; i1 <= 10; i1++)//把初始化，判断，调整三个部分集中到了一起
	{
		printf("%d\n", i1);
	}
	for (int a = 1; a <= 10; a++)
	{
		if (a == 5)
			break;//终止循环
		printf("%d\n", a);

		
	}
	for (int b = 0; b <= 10; b++)
	{
		if (b == 5)
			continue;//终止i= 5的循环
		printf("%d\n", b);
	}
	//上述代码变成while循环时有可能会变成死循环
	//不可在for循环体内修改循环变量，防止循环失去控制
	//for(int a = 1;a<=10;a++)
	//{
	//	if(i = 5)//此时i的值恒为5
	// 	   printf("haha\n");
	// 	printf("hehe\n");
	//}
	//循环里的判断部分最好用闭区间形式
	//如i<10,相当于10次循环，
	/*for (;;)
	{
		printf("hh\n");
	}*/
	//for(;;)的循环是一个死循环
	//for循环里的三个条件都可以省略
	//而判断部分省略的话则恒为真
	//for的嵌套
	for (; c <= 10; c++)
	{
		for (; d <= 10; d++)
		{
			printf("hh\n");
		}
	}
	//省略条件判断语句后，当第一次判断结束时，d的值还是10
	//故只打印10次
	for (int x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("ha\n");
	}
	for (int m = 0, n = 0; n == 0; m++, n++)//循环1次
	{
		printf("1\n");
		n++;
	}
	//do。。。while循环
	//语法
	//do
	//	循环语句
	//while(表达式);
	//do...while循环打印1-10
	int j = 1;
	do
	{
		printf("%d\n", j);
		j++;
	}
	while (j <= 10);
	//先打印一次
	//同样也可以加入break和continue语句，但要防止死循环

	return 0;
}

