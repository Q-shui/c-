#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ָ�����
// ָ������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr[4] = { &a, &b, &c, &d };
	for (int i = 0; i < 4; i++)
	{

		printf("%d ", *arr[i]);
	}
	return 0;
}
//int main()
//{
//	int a[10];//��������
//	char c[5];//�ַ�����
//	int* pa[10];//�������ָ�������-ָ������
//
//	return 0;
//}
////�ַ�ָ��
//int main()
//{
//    char str1[] = "hello bit.";//�����������ڲ�ͬ�Ŀռ�
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";//�����������ַ�����ͬ������û��Ҫ�������ռ䣻
//    char* str4 = "hello bit.";
//    if (str1 == str2)//�������Ϊ��ַ�ıȽ�
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//int main()
//{
//	char* p = "abcdef";//�����ַ������ܱ��ı�
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//�����ַ���
//	char* pc = arr;//��ŵ�ֻ�����ַ��ĵ�ַ
//	//������ַ��ĵ�ַ��ͨ�������ַ�ҵ����ڿռ䣬����\0ֹͣ
//	printf("%s\n", arr);
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	return 0;
//}