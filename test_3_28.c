#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//��һ�����е����ֵ
	int arr[] = { 1,2,3,4,5,6,7,9,10 };
	int max = arr[0];//һ���max����������е�һ��ֵ�������ʼ��Ϊ0���������������ж�
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[1]);
	for (int i = 1; i <= sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
//��ӡ9*9=�˷���ʱΪ�˶����ӡ��ʽ������printf("%d*%d=%2d ",i,j,i*j
//%2d�������λ������Ǹ�λ�����ÿո����
//��%-2d���������Ҷ���
//goto��䣬������������ָ���ĵط�
	printf("hello\n");
	goto again;
	printf("ha\n");
again:
	printf("he\n");//��ʱha�ͻᱻ�����������ӡ
//goto���ʵ���ڶ�Ƕ������
//����
//for(...)
//{ 	  for(...)
//		  {
// 				for(...)
// 	            {
//                   if(disaster)
// 	                      goto error;
// 	             }
//         }
//}
//eror:	
//	if(disaster)
//����������
	
	
	`
	return 0;
}
