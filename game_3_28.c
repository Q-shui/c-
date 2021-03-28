#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//猜数字游戏
//电脑随机生成一个数字
//自己猜，猜大了电脑会说大了，猜小了电脑会说小了，猜对了会说对了
//且能持续进行（出现菜单，选择再来一把还是退出
void menu()
{
	printf("**********************************\n");
	printf("****    1.play    0.exit    ******\n"); 
	printf("*********    2.提示    ***********\n");
	printf("*********    3.规则    ***********\n");
	printf("**********************************\n");
}//定义一个开始菜单
void game()
{
	int r;
	int g;
	//但此时两次游戏间数值相差过小，所以需要放在主函数中就行了 srand((unsigned long) time(NULL));//时间戳，其数值是当前时间减去1970.1.1.0:0:0后换算成秒
	r = rand()%100+1;//生成一个随机数，需要调用函数<stdio.h>，但此时随机数会根据程序的退出与进入而不变
	//所以需要一个函数来防止这种情况
	//模100+1生成1-100之间的数
	while (1)
	{
		printf("请开始猜测:>");
		scanf("%d", &g);
		if (g < r)
			printf("猜小了\n");
		else if (g > r)
			printf("猜大了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int s = 0;
	
	do//结束游戏后选择是否再次开始，并且刚开始程序已经执行了一次，故用do。。。while循环
	{
		srand((unsigned long)time(NULL));
		menu();
		printf("请选择：>");
		scanf("%d", &s);//选择输入数字
		switch (s)//switch语句根据不同情况输出不同结果
		{
		case 1:game(); break;
		case 0:printf("退出程序\n"); break;
		case 2:printf("二分法\n"); break;
		case 3:printf("随机生成1-100的数字，需要你进行猜测，在猜的过程中会给你提示，直到猜对\n"); break;
		default:printf("选择错误\n"); break;
		}
	}
	while (s);
	return 0;
}
