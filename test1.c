#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
	//用处
	char password1[20] = { 0 };
	int ret1 = 0;
	printf("请输入密码:>");
	scanf("%s", &password1);//输入密码，并存放在password中
	printf("请确认(Y/N):>");//输入密码之后按了回车，被getchar接收，二回车\n的ASII码值为10
	//符合else条件，故会直接输出放弃确认
	ret1 = getchar();
	if (ret1 == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	//对于输入函数，在执行的时候会有一个输入缓冲区，当输入密码的时候
	//我们输入时按了回车键，会在缓冲区留下一个\n
	//而password只读取数字，留下\n
	//导致getchar读取\n而输出放弃确认
	//可以再加入一个getchar(),读走\n
	//但如果输入了额外的字符，一个输入字符函数就不够了
	//此时需要while循环
	char password[20] = { 0 };
	int ret = 0;
	char ch = 0;
	printf("请输入密码:>");
	scanf("%s", &password);
	while((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}

	return 0;
}

