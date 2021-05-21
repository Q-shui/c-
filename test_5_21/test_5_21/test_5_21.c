#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

//内存函数

//memmove-void *memmove( void *dest, const void *src, size_t count );
//处理重叠的内存拷贝

void* my_memmove(void* dest, const void* sour, size_t num)
{
	void* ret = dest;

	assert(dest != NULL);
	assert(sour != NULL);

	if (dest < sour)
	{
		while (num--)
		{
			*(char*)dest = *(char*)sour;
			++(char*)dest;
			++(char*)sour;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)sour + num);

		}
	}

	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;

	my_memmove(arr1, arr1 + 2, 20);

	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}

////memcpy-void *memcpy( void *dest, const void *src, size_t count );
//只处理不重叠的内存拷贝

//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	void* str1 = dest;
//	assert(dest != NULL);
//	assert(sour != NULL);
//
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)sour;
//		++(char*)dest;
//		++(char*)sour;
//	}
//
//	return str1;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

////字符串函数
//
//////strerror
////
////int main()
////{
////	//错误码-错误信息
////	//errno-一个全局的错误码变量
////	//当c语言代码出现错误时，就会把错误码，赋值到errno中
////	
////	//char* str = strerror(2);//No such file or directory
////	
////	//char* str = strerror(1);//operation not permitted
////	
////	//char* str = strerror(0);//no error
////	
////	//printf("%s\n", str);
////
////	FILE* p = fopen("text.txt", "r");
////
////	if (p == NULL)
////	{
////		printf("%s\n", strerror(errno));
////	}
////	else
////	{
////		printf("open file success\n");
////	}
////
////	return 0;
////}

//int main()
//{
//	int arr[4] = { 0 };
//	int i, j;
//	int count = 0;
//
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			if (j % i == 0)
//			{
//				arr[j - 1] = !arr[j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		if (!arr[i])
//		{
//			count++;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}