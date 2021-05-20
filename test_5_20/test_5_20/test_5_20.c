#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//

//字符串函数

//strtok
//char *strtok( char *strToken, const char *strDelimit );

void print(char* str, char* p)
{
	char* ret = strtok(str, p);

	if (ret != '\0')
	{
		print(NULL, p);
		printf("%s ", ret);
	}

	
}

int main()
{
	char arr[100] = "I like beijing.";
	char* p = " ";
	print(arr, p);
	/*char* p = " ";
	char* ret = NULL;

	for (ret = strtok(arr, p); ret != '\0'; ret = strtok(NULL, p))
	{
		
	}

	return 0;*/
}

////strstr
////char* strstr( const char* string, const char* strCharSet );
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	char* s1 = (char*) str1;
//	char* s2 = (char*) str2;
//	char* cur = (char*) str1;
//
//	if (*str2 == '\0')
//	{
//		return s1;
//	}
//
//	while (*s1 != '\0')
//	{
//		s1 = cur;
//		s2 = (char*) str2;
//
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//
//		if (!*s2)
//		{
//			return cur;
//		}
//
//		cur++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char* p = "abbbcdefghidef";
//	char* p2 = "bbc";
//
//	char* ret = my_strstr(p, p2);//在p中查找一个p2字符串，如果没有，返回空指针，有的话返回地址
//	//如果重复，则返回第一个地址
//
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

////strncmp
//
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abctgy";
//
//	int ret = strncmp(p1, p2, 3);//比较前n个字符
//	printf("%d\n", ret);
//
//	return 0;
//}