#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
//判断并输出100以内的奇数
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	/*int day = 0;
	* scanf("%d",&day);
	if (day == 1)
		printf("星期一\n");
	else if (day == 2)
		prinf("星期二\n");
	else...*/
	//这样的代码太过繁琐
	//switch语句 常用于多分支情形
//swtich(整形表达式）
//{
//	语句项		语句项是一些case语句
//}
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;		
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	}
	//switch语句执行规则
	//判断switch()中的语句是几，然后进入到相应的case语句中，执行完后再由break跳出去
	//括号内必须是整型表达式	，即所得结果必须是整数
	//case后面必须是整型常量，整型表达式也可如1+1，以最后结果为准
	//不一定每个语句都要break
	int day1 = 0;
	scanf("%d", &day1);
	switch(day1)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;//习惯要加上break
	default://如果day1没有上述情况，则走默认情况		可有可无如果需要，则是处理非法状况
		printf("输入错误\n");
//default可以放在前面，习惯放后面
//注意冒号
//case里面可以嵌套if语句
	}

	return 0;
}
