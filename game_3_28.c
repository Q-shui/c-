#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������Ϸ
//�����������һ������
//�Լ��£��´��˵��Ի�˵���ˣ���С�˵��Ի�˵С�ˣ��¶��˻�˵����
//���ܳ������У����ֲ˵���ѡ������һ�ѻ����˳�
void menu()
{
	printf("**********************************\n");
	printf("****    1.play    0.exit    ******\n"); 
	printf("*********    2.��ʾ    ***********\n");
	printf("*********    3.����    ***********\n");
	printf("**********************************\n");
}//����һ����ʼ�˵�
void game()
{
	int r;
	int g;
	//����ʱ������Ϸ����ֵ����С��������Ҫ�����������о����� srand((unsigned long) time(NULL));//ʱ���������ֵ�ǵ�ǰʱ���ȥ1970.1.1.0:0:0�������
	r = rand()%100+1;//����һ�����������Ҫ���ú���<stdio.h>������ʱ���������ݳ�����˳�����������
	//������Ҫһ����������ֹ�������
	//ģ100+1����1-100֮�����
	while (1)
	{
		printf("�뿪ʼ�²�:>");
		scanf("%d", &g);
		if (g < r)
			printf("��С��\n");
		else if (g > r)
			printf("�´���\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int s = 0;
	
	do//������Ϸ��ѡ���Ƿ��ٴο�ʼ�����Ҹտ�ʼ�����Ѿ�ִ����һ�Σ�����do������whileѭ��
	{
		srand((unsigned long)time(NULL));
		menu();
		printf("��ѡ��>");
		scanf("%d", &s);//ѡ����������
		switch (s)//switch�����ݲ�ͬ��������ͬ���
		{
		case 1:game(); break;
		case 0:printf("�˳�����\n"); break;
		case 2:printf("���ַ�\n"); break;
		case 3:printf("�������1-100�����֣���Ҫ����в²⣬�ڲµĹ����л������ʾ��ֱ���¶�\n"); break;
		default:printf("ѡ�����\n"); break;
		}
	}
	while (s);
	return 0;
}
