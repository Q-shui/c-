#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//

//�ַ�������

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
//	char* ret = my_strstr(p, p2);//��p�в���һ��p2�ַ��������û�У����ؿ�ָ�룬�еĻ����ص�ַ
//	//����ظ����򷵻ص�һ����ַ
//
//	if (ret == NULL)
//	{
//		printf("������\n");
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
//	int ret = strncmp(p1, p2, 3);//�Ƚ�ǰn���ַ�
//	printf("%d\n", ret);
//
//	return 0;
//}