#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ָ��
//// ָ������,���ָ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10];//��������
//	int* arr2[3] = { &a, &b, &c };//ָ������
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr2[i]);
//	}
//	return 0;
//}
//// ����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//int** ���ұߵ�*�������Ǹ�ָ�룬ָ��int*��
//	printf("%d", **ppa);//����ָ�������
//	return 0;
//}
//// ָ�������
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//��Ȼֵһ���������岻һ��
//	printf("%p\n", &arr + 1);//�����ַ��һ����һ��������ֽ�
//
//	//һ����Ϊarr����������Ԫ�ص�ַ
//	//��Ҳ������
//	//1.&arr��ʾ������������ĵ�ַ
//	//2.sizeof(arr)����������������ĳ���
//	return 0;
//}
////ָ���ָ��
//// ���ַ�������
//int mystrlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	printf("%d", &arr[9] - &arr[0]);//9
//	//ֻ��������Ԫ���������ͬһ��ռ�
//	return 0;
//}
// ָ��+-����
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;//p++;
//	}
//	return 0;
//}
//int main()
//{
//	////ָ���ʼ��
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL - ������ʼ��ָ�룬��ָ�븳ֵ
//	//С��ָ��Խ��
//	//ָ����ָ�ռ��ͷţ�Ҫ��NULL
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//�ͷ�ָ��
//	//ֻ�е�ָ�벻�ǿ�ָ���ʱ�������
//
//	return 0;
//}
//#include <math.h>
////int main()
////{
////	int a = pow(2, 3);
////	printf("%d", a);
////	return 0;
////}
//void Judge(int i)
//{
//	int count = 0, s = 0;
//	int j = i;
//	int k = i;
//	while (j != 0)
//	{
//		count++;
//		j /= 10;
//	}
//	while(k != 0)
//	{
//		s += pow((k % 10), count);
//		k /= 10;
//	}
//	if (s == i)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 10000; i++)
//	{
//		Judge(i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, n, i, s;
//	printf("������a(0-10)��n��ֵ��>");
//	scanf("%d%d", &a, &n);
//	int sum = a;
//	for (i = 1, s = a; i < n; i++)
//	{
//		s = a + s * 10;
//		sum += s;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i, arr[5];
//	int* pa = arr;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//}
//int main()
//{
//	int i = 1234;
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//		}
//		i /= 2;
//	}
//	printf("%d\n", count);
//}
//void my_print(int n)
//
//{
//	int i = 0;
//	printf(" ��ӡ����λ\n");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("��ӡż��λ\n");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//
//}
//int main()
//{
//	int num = 1234;
//	int count = 0;
//	my_print(num);
//	return 0;
//}

//int main()
//{
//	int a = 0b1010101011001;
//	int l,i;
//	for (i = 0; i < 32; i++)
//	{
//		if (a < 2 ^ (i + 1) && a > 2 ^ (i - 1))
//		{
//			l = i;
//		}
//	}
//	for (i = l; i > 0; i--)
//	{
//		if (i % 2 == 1)
//		{
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, s, count = 0;
//	scanf("%d%d", &a, &b);
//	s = a ^ b;
//	while (s != 0)
//	{
//		count++;
//		s = s & (s - 1);
//	}
//	printf("%d", count);
//}
//int Judge(int a, int b)
//{
//	int max, min, count = 0;
//	if (a > b)
//	{
//		max = a;
//		min = b;
//	}
//	else
//	{
//		max = b;
//		min = a;
//	}
//	while (min)
//	{
//		if ((min % 2) != (max % 2))
//		{
//			count++;
//		}
//		min /= 2;
//		max /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d",Judge(a, b));
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//ָ��
//int main()
//{
//
//	return 0;
//}
//// Ұָ��
// ���Ұָ�룺
// 1ָ�������ʼ��
// 2С��ָ��Խ��
// 3
//int* test()
//{
//	int a = 20;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//	//ָ��ָ��Ŀռ��ͷ�
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//	//ָ��Խ�絼�µ�Ұָ��
//}
//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
//	int* p;//�ֲ���ָ�����������ʼ��Ϊ���ֵ
//	*p = 20;//�漴�ҵ�һ���ط����20��
//	return 0;
//}//δ��ʼ��
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;//������-��Ԫ�ص�ַ
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//16843009 16843009 257 0 0 0 0 0 0 0
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//���ƫ��4���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//���ƫ��1���ֽ�
//
//	return 0;
//}
////ָ�����;���ָ����ǰ�������һ���ľ����ж��
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pa = &a;
//	*pa = 0;
//	/*char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	printf("%d\n", *pa);
//	printf("%d\n", *pc);*/
//
//	return 0;
//}
//ָ�����;����˽��н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
// int* p *p�ܷ���4���ֽ�
// char* p 1
// double* p 8
// short* p 2
//ָ�����ڴ���ȡ��
//int main()
//{
//
//	return 0;
//}
////E��ȫΪ0��ȫΪ1
////��ʱ���������Ͳ�������Ĺ����ʾ����ָ��E�ļ���ֵ��ȥ127����1023�����õ���ʵֵ���ٽ���Ч����Mǰ
////���ϵ�һλ��1�� ���磺 0.5��1 / 2���Ķ�������ʽΪ0.1�����ڹ涨�������ֱ���Ϊ1������С��������1λ��
////��Ϊ1.0 * 2 ^ (-1)�������Ϊ - 1 + 127 = 126����ʾΪ01111110����β��1.0ȥ����������Ϊ0������0��23λ
////00000000000000000000000����������Ʊ�ʾ��ʽΪ:
////EȫΪ0
////��ʱ����������ָ��E����1 - 127������1 - 1023����Ϊ��ʵֵ�� ��Ч����M���ټ��ϵ�һλ��1�����ǻ�ԭΪ
////0.xxxxxx��С������������Ϊ�˱�ʾ��0���Լ��ӽ���0�ĺ�С�����֡�
////EȫΪ1
////��ʱ�������Ч����MȫΪ0����ʾ�����������ȡ���ڷ���λs��
