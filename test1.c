#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <stdio.h>
int main()
{
	int x = 0;//�ֺŸ�����䣬ÿһ���ֺŴ���һ�����
	;//�ֺ�Ҳ��һ�ָ����
	//��֧���
	//�����ʽ
	//if(���ʽ��
	//	���;

	//if�����ʽ��
	//	���1;
	//else
	//	���2;

	//���֧
	//if�����ʽ1��
	//	���1;
	//else if�����ʽ2��
	//	���2;
	//else
	//	���3;
	int age1 = 10;
	if (age1 < 18)
		printf("δ����\n");
	int age2 = 20;
	if (age2 > 18)
		printf("����\n");
	else
		printf("δ����\n");
	int age3 = 10;
	if (age3 < 18)
		printf("δ����\n");
	else if (age3 >= 18 && age3 < 28)
		printf("����\n");
	else if (age3 >= 28 && age3 < 50)
		printf("׳��\n");
	/*else if (18 <= age3 < 28)
		printf("����\n");*/
		//������ı��ʽ18 <= age3 < 28����ִ��18��=age3��Ϊ�٣�ֵΪ0��0<28Ϊ�棬�ʷ�������
	else
		printf("����\n");
	int age4 = 10;
	if (age4 < 18)
		printf("δ����\n");
	else
	{
		if (age4 >= 18 && age4 < 28)
			printf("����\n");
		else if (age4 >= 28 && age4 < 50)
			printf("׳��\n");
		/*else if (18 <= age4 < 28)
			printf("����\n");*/
		else
			printf("����\n");
	}
	//���������������Ҫִ�ж�����䣬����ʹ�ô���顢
	//if else���Ҫ���ƶ������룬��Ҫ�ɶ�������������


	//����else
	/*int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
			//else ������������δƥ���ifƥ��
			//a = 0,��һ��if���ж�Ϊ�٣�if���δ��ȥ���������ֵ
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");//�������ſɷ�ֹ���δִ��
	//if�����д��ʽ
	//if(condition){
	/*return x;
	}
	return y*/
	//��ʾ�����������x�����������y�����ɶ��Բ�
	//if (condition) {
	//{	
	//	return x;
	//}	
	//else
	//{
	//	return y��
	//}
	//�ɶ��ԽϺ�
	int num = 4;
	if (num == 5)//һ���Ⱥ��Ǹ�ֵ�����������ж����
	//�жϳ���������Ƿ����ʱ���ɽ���������ǰ�棬5 == num	
	{
		printf("hehe\n");
	}
	//�ж�һ�����Ƿ�Ϊ����
	int y = 0;
	scanf("%d", &y);
	if (y%2 == 1)
		printf("������\n");
	else
		printf("��������\n");
	
	return 0;
}