#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����
//�ж�һ�����ǲ�������
void sushu(int x)
{
	int i;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			break;
	}
	if (i < x)
	{
		printf("�����������\n");
	}
	else
		printf("�������������\n");
}
//�ж������ǲ�������
void runnian(int x)
{
	if (x % 4 == 0 && x % 100 == 0 && x % 400 != 0)
	{
		printf("����������\n");
	}
	else
	{
		printf("���겻������\n");
	}
}

int main()
{
	int a, b, c;
	char arr[] = { 0 };
	scanf("%d%d", &a, &b);
	sushu(a);
	runnian(b);
	shuzuchazhao(arr, c);
	return 0;
}