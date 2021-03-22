#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <stdio.h>
int main()
{
	int x = 0;//分号隔开语句，每一个分号代表一个语句
	;//分号也是一种该语句
	//分支语句
	//表达形式
	//if(表达式）
	//	语句;

	//if（表达式）
	//	语句1;
	//else
	//	语句2;

	//多分支
	//if（表达式1）
	//	语句1;
	//else if（表达式2）
	//	语句2;
	//else
	//	语句3;
	int age1 = 10;
	if (age1 < 18)
		printf("未成年\n");
	int age2 = 20;
	if (age2 > 18)
		printf("成年\n");
	else
		printf("未成年\n");
	int age3 = 10;
	if (age3 < 18)
		printf("未成年\n");
	else if (age3 >= 18 && age3 < 28)
		printf("青年\n");
	else if (age3 >= 28 && age3 < 50)
		printf("壮年\n");
	/*else if (18 <= age3 < 28)
		printf("青年\n");*/
		//有问题的表达式18 <= age3 < 28，先执行18《=age3，为假，值为0，0<28为真，故符合条件
	else
		printf("老年\n");
	int age4 = 10;
	if (age4 < 18)
		printf("未成年\n");
	else
	{
		if (age4 >= 18 && age4 < 28)
			printf("青年\n");
		else if (age4 >= 28 && age4 < 50)
			printf("壮年\n");
		/*else if (18 <= age4 < 28)
			printf("青年\n");*/
		else
			printf("老年\n");
	}
	//如果条件成立，且要执行多条语句，则须使用代码块、
	//if else语句要控制多条代码，则要吧多条代码括起来


	//悬空else
	/*int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
			//else 与其离得最近的未匹配的if匹配
			//a = 0,第一个if的判断为假，if语句未进去，故无输出值
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");//加入括号可防止语句未执行
	//if语句书写形式
	//if(condition){
	/*return x;
	}
	return y*/
	//表示条件成立输出x，不成立输出y，但可读性差
	//if (condition) {
	//{	
	//	return x;
	//}	
	//else
	//{
	//	return y；
	//}
	//可读性较好
	int num = 4;
	if (num == 5)//一个等号是赋值，两个才是判断相等
	//判断常量与变量是否相等时，可将常量放在前面，5 == num	
	{
		printf("hehe\n");
	}
	//判断一个数是否为奇数
	int y = 0;
	scanf("%d", &y);
	if (y%2 == 1)
		printf("是奇数\n");
	else
		printf("不是奇数\n");
	
	return 0;
}
