#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int MAX(int a, int b)
{
	int t = 0;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	return a, b;
	
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", sum(a));
	}
	//�������������Լ��
	//շת�����
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int q = 0;
	MAX(m, n);
	while (m % n != 0)
	{
		q = m % n;
		m = n;
		n = q;
	}
	if (m % n == 0)
	{
		printf("%d\n", n);
	}
	//�Գ���������
	//��100���ڵ�����
	//�����㷨Ч�ʽϲ�
	int o = 0,p = 0;
	for (o = 1; o <= 100; o++)
	{
		for(p = 2;p<o;p++)
		{
			if (o % p == 0)
				break;
		}
		if (p == o)
		{
			printf("%d \n", o);
		}
	}
	//���һ����������������ô�����д����������˼�i = a*b
	//	��a��b�б���һ��С�ڵ��ڿ�ƽ��i
	int w = 0, e = 0;
	for (w = 1; w <= 100; w++)
	{
		for (e = 2; e <= sqrt(w); e++)
		{
			if (w % e == 0)
			{
				break;
			}
		}
		if (e > sqrt(w))
		{
			printf("%d \n", w);
		}
	}
	//�����������д������Խ���
	//���ǵ�ż�������������Խ������Ϊ��
	int s = 0, d = 0;
	for (s = 1; s < 100; s += 2)
	{
		for (d = 2; d < sqrt(s); d++)		
		{
			if (s % d == 0)
				break;
		}
		if (d > sqrt(s))
		{
			printf("%d \n", s);
		}
	}
	return 0;
}

