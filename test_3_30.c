#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
//字符串拷贝函数strcpy(),把一个地址的字符串拷贝到另一个地址
//具体用法：strcpy(目的地，源头)
//例如：
	char arr[] = "hello";
	char arr2[10] = "0";
	strcpy(arr2,arr);
	printf("%s\n", arr2);
//memset - memory set内存设置
//void * memset ( void * ptr, int value, size_t num ) ptr是要填充的内存块，value是要设置的值 num是要设置的值的个数
//填充内存块  
//Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).
	char arr3[] = "hello world";
	memset(arr3, '*', 5);//*储存的ASII值，所以是整型变量
	printf("%s\n", arr3);
//如果拷贝的字符串比原字符串长，则会导致数值的溢出

//自定义函数
//组成：
//函数名，返回类型，函数参数

	return 0;
}