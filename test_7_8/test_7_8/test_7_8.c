#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int my_strlen(char* str1)
//{
//	int len = 0;
//
//	while (*str1 != '\0')
//	{
//		len++;
//		str1++;
//	}
//
//	return len;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//
//	printf("%d\n", my_strlen(str1));
//	printf("%d\n", strlen(str1));
//
//	return 0;
//}

//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//	char str3[] = "hello";
//
//	strcpy(str1, str3);
//	my_strcpy(str2, str3);
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}

//int my_strcmp(char* str1, char* str2)
//{
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char str1[] = "abcdr";
//	char str2[] = "abcdf";
//
//	printf("%d\n", strcmp(str1, str2));
//	printf("%d\n", my_strcmp(str1, str2));
//
//	return 0;
//}

//void my_strcat(char* dest, char* sour)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;
//}
//
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[20] = "hello ";
//	char str3[] = "world";
//
//	strcat(str1, str3);
//	my_strcat(str2, str3);
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}

char* my_strstr(char* str1, char* str2)
{
	char* tmp1 = str1;
	char* tmp2 = str2;
	char* s = str1;
	while (*s != '\0')
	{
		tmp1 = s;
		tmp2 = str2;
		while ((*tmp1 == *tmp2) && *tmp1 && *tmp2)
		{
			tmp1++;
			tmp2++;
		}

		if (*tmp2 == '\0')
		{
			return s;
		}

		s++;
	}

	return NULL;
	
}

int main()
{
	char str1[] = "abbcdef";
	char str2[] = "bcd";

	char* ret1 = strstr(str1, str2);

	if (ret1 == NULL)
	{
		printf("未找到\n");
	}

	else
	{
		printf("找到了\n");
	}

	char* ret2 = my_strstr(str1, str2);

	if (ret2 == NULL)
	{
		printf("未找到\n");
	}

	else
	{
		printf("找到了\n");
	}

	return 0;
}