#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//	ret_type fun_name(para1,*)
//	{
//		statement
//	}
//ret_type 返回类型
//fun_name 函数名
//para1 函数参数
// 函数形参只是实参的一份临时拷贝，对形参的改变是不会改变实参的，函数的实参和形参占用不同内存块
// 函数实参 传递给函数的值 如下面的ab
// 函数形参 定义函数时括号里面的值如xy
//实参传递给形参的时候必须是已确定的值，实参也可以是函数，但必须能算出确定的值
//函数1
//求两个数中的较大值
int MAX(int x, int y)
{
	int c;
	if (x < y)
		c = y;
	else
		c = x;
	return c;
}
int max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
//函数优化
int get_max(int x, int y)
{
	return x > y ? x : y;
}
//函数2
//交换两个数的内容
//无返回类型函数用void
void swap1(int x, int y)
{
	int c = x;
	x = y;
	y = c;
}
//这种函数有问题
//上述函数中xy的地址和ab的不同，所以xy交换和ab没关系
//所以考虑用指针来完成函数
//函数修改
void swap2(int* px, int* py)
{
	int c = 0;
	c = *px;
	*px = *py;
	*py = c;
}
//函数调用
//传值调用和传址调用
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int max1=MAX(a, b);
	int max2 = get_max(a, b);
	printf("%d\n", max1);
	printf("%d\n", max2);
	//swap(a, b);
	//printf("a=%d b=%d", a, b);
	//此时打印的ab并没有交换
	int q = 10;
	int* pq = &q;//pq是指针变量
	*pq = 20;//解引用操作，此时q的值变为20，而他的地址没变
	swap2(&a, &b);//把ab的地址传上去
	printf("a=%d b=%d", a, b);

	return 0;
}
