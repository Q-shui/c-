//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,5,2,8,23,88,45,45,78,29 };
//	int i = 0;
//	int a = sizeof(arr) / sizeof(arr[0]) - 1;
//	int max = arr[0];
//	for (i = 0; i <= a; i++)
//	{
//		
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ",max);
//	return 0;
//}
//int main()
//{
//	float sum =0;
//	int i = 0, j = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += j * (1.0 / i);
//		j = -j;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int i =0,j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			j += 1;
//		}
//		if (i / 10 == 9)
//		{
//			j += 1;
//		}
//	}
//	printf("%d\n", j);
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//void lookup_prime_number(int x)
//{
//	int i;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			break;
//		}
//	}
//	if (i == x)
//	{
//		printf("%d ", x);
//	}
//}
//int main()
//{
//	int pn;
//	for (pn = 100; pn <= 200; pn++)
//	{
//		lookup_prime_number(pn);
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//void rank_3(int x, int y, int z)
//{
//	int t;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x < z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("%d %d %d\n", x, y, z);
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	rank_3(a, b, c);
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}
//void C_divisor(int a, int b)
//{
//	int i = 0;
//	if (a < b)
//	{
//		int t;
//		t = b;
//		b = a;
//		a = t;
//	}
//	while (a % b != 0)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	printf("%d\n", b);
//}
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	C_divisor(x, y);
//	return 0;
//}
//#pragma once
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////��������Ϸ
////�����������һ������
////�Լ��£��´��˵��Ի�˵���ˣ���С�˵��Ի�˵С�ˣ��¶��˻�˵����
////���ܳ������У����ֲ˵���ѡ������һ�ѻ����˳�
//void menu()
//{
//	printf("**********************************\n");
//	printf("****    1.play    0.exit    ******\n");
//	printf("*********    2.��ʾ    ***********\n");
//	printf("*********    3.����    ***********\n");
//	printf("**********************************\n");
//}//����һ����ʼ�˵�
//void game()
//{
//	int r;
//	int g;
//	//����ʱ������Ϸ����ֵ����С��������Ҫ�����������о����� srand((unsigned long) time(NULL));//ʱ���������ֵ�ǵ�ǰʱ���ȥ1970.1.1.0:0:0�������
//	r = rand() % 100 + 1;//����һ�����������Ҫ���ú���<stdio.h>������ʱ���������ݳ�����˳�����������
//	//������Ҫһ����������ֹ�������
//	//ģ100+1����1-100֮�����
//	while (1)
//	{
//		printf("�뿪ʼ�²�:>");
//		scanf("%d", &g);
//		if (g < r)
//			printf("��С��\n");
//		else if (g > r)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int s = 0;
//
//	do//������Ϸ��ѡ���Ƿ��ٴο�ʼ�����Ҹտ�ʼ�����Ѿ�ִ����һ�Σ�����do������whileѭ��
//	{
//		srand((unsigned long)time(NULL));
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &s);//ѡ����������
//		switch (s)//switch�����ݲ�ͬ��������ͬ���
//		{
//		case 1:game(); break;
//		case 0:printf("�˳�����\n"); break;
//		case 2:printf("���ַ�\n"); break;
//		case 3:printf("�������1-100�����֣���Ҫ����в²⣬�ڲµĹ����л������ʾ��ֱ���¶�\n"); break;
//		default:printf("ѡ�����\n"); break;
//		}
//	} 	while (s);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,12,26,38,49,50,60,78,86,96,97,98 };
//	int k = 50;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", mid);
//	}
//	return 0;
//}
