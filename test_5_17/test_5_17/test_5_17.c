#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };//��������ַ���ַ
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}


//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}


//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	
//	printf("%x,%x", ptr1[-1], *ptr2);
//	
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////�ṹ������ָ���С��20���ֽ�
//int main()
//{
//	p = 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d%d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//int main()
//{
//	//��������
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16-�����С
//	//printf("%d\n", sizeof(a + 0));//4-ָ���С
//	//printf("%d\n", sizeof(*a));//4-Ԫ�ش�С
//	//printf("%d\n", sizeof(a + 1));//4-��ַ��С
//	//printf("%d\n", sizeof(a[1]));//4-Ԫ�ش�С
//	//printf("%d\n", sizeof(&a));//4-��ַ��С
//	//printf("%d\n", sizeof(*&a));//16-�����С
//	//printf("%d\n", sizeof(&a + 1));//4-��ַ��С
//	//printf("%d\n", sizeof(&a[0]));//4-��ַ��С
//	//printf("%d\n", sizeof(&a[0] + 1));//4-��ַ��С
//
//	//�ַ�����
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6-�����С
//	//printf("%d\n", sizeof(arr + 0));//4-��ַ��С
//	//printf("%d\n", sizeof(*arr));//1-Ԫ�ش�С
//	//printf("%d\n", sizeof(arr[1]));//1-Ԫ�ش�С
//	//printf("%d\n", sizeof(&arr));//4-��ַ��С
//	//printf("%d\n", sizeof(&arr + 1));//4-��ַ��С
//	//printf("%d\n", sizeof(&arr[0] + 1));//4-��ַ��С
//	//printf("%d\n", strlen(arr));//���ֵ-�ַ������ȣ�����\0ֹͣ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7-�����С
//	//printf("%d\n", sizeof(arr + 0));//4-ָ���С
//	//printf("%d\n", sizeof(*arr));//1-��Ԫ�ش�С
//	//printf("%d\n", sizeof(arr[1]));//1-�±�Ϊ1��Ԫ�ش�С
//	//printf("%d\n", sizeof(&arr));//4-��ַ��С
//	//printf("%d\n", sizeof(&arr + 1));//4-��ַ��С
//	//printf("%d\n", sizeof(&arr[0] + 1));//4-�ڶ���Ԫ�صĴ�С
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//12
//	//printf("%d\n", strlen(&arr[0] + 1));//15
//
//	//char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p + 1));//4;
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));
//	////printf("%d\n", strlen(p[0]));//�Ƿ������ڴ�
//	//printf("%d\n", strlen(&p));//3
//	//printf("%d\n", strlen(&p + 1));//11
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//��ά����
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//48
//	////printf("%d\n", sizeof(a[0][0]));
//	//printf("%d\n", sizeof(a[0]));//16
//	//printf("%d\n", sizeof(a[0] + 1));//4
//	////printf("%d\n", sizeof(*(a[0] + 1)));
//	//printf("%d\n", sizeof(a + 1));//4
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	//printf("%d\n", sizeof(*a));//16
//	//printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}

////ָ��
//// �ص�����-ͨ������ָ����õĺ���
//// ð��������
//
//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//�Ƚ�//
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


// qsort-�������������͵�����
// void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
// ����
// 1.������
// 2.������Ԫ�ظ���
// 3.�����е�Ԫ�ش�С
// 4.����ָ��Z.�Ƚ�����Ԫ�صĴ�С
//QUICK SORT��������
// void��ָ��-������ָ��
// ���ܽ��н����ã��ӼӼ����Ĳ���
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//void test2()
//{
//	float f[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//void cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20}, {"lisi",30}, {"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//void test4()
//{
//	struct stu s[3] = { {"zhangsan",20}, {"lisi",30}, {"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test1();
//	printf("\n");
//
//	test2();
//	printf("\n");
//
//	test3();
//	printf("\n");
//
//	test4();
//	printf("\n");
//
//	return 0;
//}
//void Bubblesort(int arr[], int sz)
//{
//	int temp;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}//ֻ������������
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void print(char* str)
//{
//	printf("%s", str);
//}
//
//void test(void (*p)(char*))//ָ�봫��-���ݺ���ָ��
//{
//	printf("test\n");
//	p("hello");//���ú���
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}
////ָ����ָ�������ָ��
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10];//��������
//	int* p = &arr;//ȡ�������ַ-����ָ��
//	int(*pf)(int, int);//����ָ��
//	int (*pfarr[4])(int, int);//ָ������
//	int (*(*ppfarr)[4])(int, int) = &pfarr;//*ppfarr�Ǹ�����ָ��,ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص������Ǹ�����ָ��int(*)(int, int)
//
//	return 0;
//}
//int main()
//{
//
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}