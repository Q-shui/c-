#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ж����������
int binary_search(int k,int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <+ right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+1;
			
		}
		else if (arr[mid] > k)
		{
			right = mid-1;
			
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
void ADD(int* p)
{
	*p += 1;//����ʹ��*p++��������������ȼ��ϸߣ����ڽ����ò�����������ʹ�ã�*p��++
}
int main()
{
	for (int a = 1000; a <= 2000; a++)
	{
		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
			printf("%d ", a);
	}
	printf("\n");
//��Ҫ�ں����ڲ�ʹ�ô�ӡ�������ú�����һ���Ķ�����
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	int sz = sizeof(arr) / sizeof(arr[1]);
	scanf("%d", &k);
	int ret = binary_search(k, arr,sz);
	if (-1 != ret)
		printf("�ҵ��ˣ��±���%d\n", ret);
	else
		printf("δ�ҵ�\n");
//���鴫�ε�ʱ���޷����ú����ڲ������鳤��
//�ڴ��ݸ����������ʱ�򣬴��ݹ�ȥ������Ԫ�صĵ�ַ����ʱarr�Ǹ�ָ��
//����Ҫ���������ȥ����ĳ���

//�Ӻ����ڲ��ı亯���ⲿ��ֵʱ����Ҫ����ָ�����
	int num = 0;
	int* p = &num;
	ADD(p);
	printf("%d\n", num);
	ADD(p);
	printf("%d\n", num);

	
	return 0;
}