#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
//编写代码，演示多个字符从两端移动，向中间汇聚
int main()
{
	char arr1[] = "welcome to my code";//字符串数组定义形式
	char arr2[] = "##################";//注意字符串的后面还有一个\n,所以在用sizeof算字符串长度的时候要-2
	//如right = sizeof(arr1) / sizeof(arr1[0]) - 2
	//或者可以用求字符串长度函数right = strlen(arr1)-1也是末位数下标
	//strlen()的头文件是#include <string.h>
	int left = 0, right = 0;
	for (left = 0,right = sizeof(arr1)/sizeof(arr1[0])-2;left <= right;left++,right--)
	//循环的时候left不断增大，right不断减小故当left》right时循环停止
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//每打印一次休息一秒
		Sleep(1000);//单位是毫秒，头文件是#include <windows.h>
		system("cls");//执行系统命令的一个函数，头文件是#include <stdlib.h>
		//cls是清空屏幕
	}
	printf("%s\n", arr2);
	//编写代码实现，模拟用户登陆情景，并且只能登录三次
	//（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次军错误则退出程序
	//my code
	// password[] = {"123456"};
	char password[20] = { "123456" };
	char password2[20] = { 0 };
	int ret = 0;
	
	int i = 0;
	int t = 3 - i;
	for (i = 1;i<=3;i++)
	{
		printf("请输入密码：");
		scanf("%s", &password2);
		
		if (strcmp(password2 ,password))//==不能用来判断两个字符串是否相等，应该用一个库函数-strcmp
		//库函数strcmp的头文件依旧为#include <sring.h>
			printf("密码错误请重新输入，您还剩%d次机会\n", t);
		else
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i > 3)
	{
		printf("三次输入均不正确，退出程序\n");
		
	}
	
	return 0;
}
