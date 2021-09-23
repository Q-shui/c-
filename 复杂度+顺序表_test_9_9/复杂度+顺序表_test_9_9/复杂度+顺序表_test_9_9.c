#define _CRT_SECURE_NO_WARNINGS




////�ռ临�Ӷ�
//
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}//O(1)����������
//
//long long* Fibonacci(size_t n)
//{
//	if (n == 0)
//		return NULL;
//
//	long long* fibArray = (long long*)malloc((n + 1) * sizeof(long long));
//	fibArray[0] = 0;
//	fibArray[1] = 1;
//	for (int i = 2; i <= n; ++i)
//	{
//		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
//	}
//	return fibArray;
//}//O(n)
//
//long long Fac(size_t N)
//{
//	if (N == 0)
//		return 1;
//
//	return Fac(N - 1) * N;
//}//O(n)
//
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}//O(n)  ������ջ֡�Ĵ���

//˳���

//�������ݽṹ�е����ݾ����ú���ȥ����

#include "SeqList.h"

void TestSeqList1();//�������Գ���

int main(void)
{
	TestSeqList1();

	return 0;
}

void TestSeqList1()
{
	SLT s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 1);

	SeqListPushFront(&s);


	SeqListPopback(&s, 3);

	SeqListPopFront(&s);

	SeqListInsert(&s, 1, 10);//�࿼��һЩ�������

	SeqListErase(&s, 0);

	printf("���ҵ�����λ��Ϊ%d\n", SeqListFind(&s, 10));

	

	SeqListPrint(&s);

	SeqListDestory(&s);
}

//�������ʵ��Ӹ��˵�