#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//�ַ�������

//strncpy

////strcmp
////int strcmp(const char* str1, const char* str2)
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1++ == *str2++)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//	}
//	
//	/*if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//	return (*str1 - *str2);
//
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "ghijk";
//	int ret = my_strcmp(p1, p2);
//	//�ȱȽϵ�һ���ַ�,�����αȽ�
//
//	printf("%d\n", ret);
//
//	return 0;
//}

////strcat
////cahr* strcat(char* destination, const char* source)
//
//char* my_strcat(char* dest, const char* sour)
//{
//	assert(dest != NULL);
//	assert(dest != NULL);
//
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	/*char arr1[30] = "hello";
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);*/
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

////strcpy
////char* strcpy(char* destination, const char* source)
////Դ�ַ����������'\0'����������ֹͣ,��ֹ���Խ�����
////Ŀ��ռ�����㹻��,���ݱ�����޸�
//
////����sourָ����ַ�����destָ��Ŀռ䣬����'\0'
////���������ַ������ᱻ�ı�
//char* my_strcpy(char* dest, const char* sour)
//{
//	assert(dest != NULL);
//	assert(sour != NULL);
//
//	char* ret = dest;
//	/*while (*dest != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;*/
//	/*while (*dest != '\0' && *sour != '\0')
//	{
//		*dest++ = *sour++;
//	}
//	*dest = *sour;*/
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//	
//	return ret;
//}
//
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);*/
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);//hello
//	printf("%s\n", arr2);//hello
//
//	return 0;
//}

////strlen
//
////��������ʱ���������ַ�������
////�ݹ�
//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//	{
//		return my_strlen2(str + 1) + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////������,ָ��
//int my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = strlen(arr);//\0���ַ���ֹͣ�ı�־��arr[]��û��\0,�����Ǵ���6�����ֵ
//	int len = my_strlen("abcdef");//�Զ������ַ������ĺ���
//	int len2 = my_strlen2("abcdef");
//
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen("abc")�Ǹ��޷�����unsigned int
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}//1
//
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)//����������int
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}//0
//	printf("%d\n", len);
//	printf("%d\n", len2);
//
//	return 0;
//}

//int main()
//{
//	int n, arr[3], j;
//	
//
//	for (n = 100; n < 1000; n++)
//	{
//		int m = 0;
//		j = n;
//		while (j != 0)
//		{
//			m = m * 10 + j % 10;
//			j /= 10;
//		}
//		if (m + n == 1333)
//		{
//			printf("abc��ֵΪ��%d\n", n);
//			for (int i = 0; i < 3; i++)
//			{
//				int k = n;
//				arr[2 - i] = k % 10;
//				k /= 10;
//			}
//			printf("a,b,c��ֵ�ֱ�Ϊ��");
//			for (int i = 0; i < 3; i++)
//			{
//				printf("%d ", arr[i]);
//			}
//			printf("\n");
//		}
//	}
//
//
//	return 0;
//}

//int reverse(int n)
//{
//	int tmp = 0;
//	while (n != 0)
//	{
//		tmp = tmp * 10 + n % 10;
//		n /= 10;
//	}
//	return tmp;
//}
//
//void print(int n)
//{
//	if (n != 0)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n, m;
//	for (n = 100; n < 1000; n++)
//	{
//		m = reverse(n);
//		if (m + n == 1333)
//		{
//			printf("a,b,c��ֵΪ��");
//			print(n);
//		}
//	}
//	
//
//	return 0;
//}
//
//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= (n * 2 + 1); j++)
//		{
//			if ((j > (n - i)) && (j <= (n + 1 + i)))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main() 
//{
//    int i;    
//    for (i = 0; i < 100; i++)
//    {
//        if ((i % 3 == 0) && (i % 10 == 6))
//        {
//            printf("%4d", i);
//        }
//    }
//
//    return 0;
//}
//
//int main() 
//{
//    int i, j = 0; 
//    for (i = 1; i <= 4; i++) 
//    {
//        switch (i % 3) 
//		{
//
//        case 0:j++;
//
//        case 1:j++;
//
//        case 2:j++;
//        }
//    }        
//    printf("j = %d\n", j); 
//    return 0;
//}//j = 8
//
//int main()
//{
//	int i, j, k;
//	for (i = 0; i < 30; i++)
//	{
//		for (j = 0; j < 50; j++)
//		{
//			if (i * 6 + j * 4 + (100 - i - j) == 200)
//			{
//				printf("����%dƥ������%dƥ��С��%dƥ��\n", i, j, 100 - i - j);
//			}
//		}
//	}
//
//	return 0;
//}