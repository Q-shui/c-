#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ӡ1-100�к���9������
int main()
{
	int count = 0,i = 0,a = 0,b = 0;
	for(i = 1; i <= 100; i++)
	{
		if(i % 10 == 9)
		{
			printf("%d\n", i);
			count++;
		}
		if(i / 10 == 9)
		{
			printf("%d\n",i);
			count++;
		}
		
	}
	printf("count = %d\n",count);
//����1/1-1/2+1/3-1/4+1/5����-1/100��ֵ
	double sum = 0.0;//����ĺ�ΪС������Ҫ���帡�������֣��Һ����ʼ����ֵΪ0.0
	int flag = 1;//�ı����
	for (i = 1; i <= 100; i++)
	{
		sum += (flag)*1.0 / i;//Ϊ��ʹsumΪС��������ҪΪ������
		flag = -flag;//���ű仯
	}
	printf("%lf\n", sum);
//���9*9�˷���
	for (i = 1; i <= 9; i++)
	{
		for (a = 1; a <= i; a++)
		{
			b = a * i;
			printf("%d*%d = %d ", a, i, b);
		}
		printf("\n");
	}
//
	return 0;
}
