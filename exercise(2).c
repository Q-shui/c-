#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��һ�����������в���ĳ�����������n����дint binsearch(int x,int v[],int n)����
//��v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//дһ�����룬��arr������(�����)�ҵ�7
	int i = 0, sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;
		}
		if (i == sz)
			printf("�Ҳ���\n");
	}
	//�����������飬�����ķ���Ч�ʵ�
	//���Բ����۰���ҵķ�ʽ
	//�۰���Ҵ���
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("û�ҵ�\n");
	}
	//���ֲ���ʱ��ע�������ұ�
	//����һ���м�ֵΪ����ұ��ƽ��ֵ
	//���kС���м�ֵ�����ұ��Ϊ�м�ֵ-1��k�����м�ֵ����Ϊ�м�ֵ+1
	//���ѭ��ֱ���ҵ�����k���±�
	//while�������ж�
	//�ڲ��ҵĹ����У��������û��Ҫ���ҵ������ڶ���ʱ���������ұ����1������
	//��ʱ��ѭ��һ������ұ����ڣ��������ҵ�ֵ�ڴ�֮�⣬��һ�Σ�������ȣ�ֱ���������ұ�
	//��ʱѭ������
	//��while����Ϊ���С�ڵ����ұ�
	return 0;
}
