#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int x = 0, y = 2;
//
//	while (arr[x][y] != k)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//	}
//
//	if (arr[x][y] == k)
//	{
//		printf(" 下标为 %d %d", x, y);
//	}
//	else
//	{
//		printf("未找到");
//	}
//
//	return 0;
//}

//int main()
//{
//	char str[10] = "abcd";
//	int k;
//	scanf("%d", &k);
//	char str1[10] = { '\0' };
//	char* s = str;
//	char* s1 = str1;
//
//	strncpy(s1, s, k);
//
//	strcpy(s, s + k);
//
//	strcat(s, s1);
//
//	printf("%s", str);
//
//	return 0;
//}

int main()
{
	char str1[10] = "EAABCD";
	char str2[10] = "AABCDE";
	int k1 = strlen(str1);
	int k2 = strlen(str2);
	int i;

	if (k1 != k2)
	{
		printf("不是\n");
	}

	else
	{
		for (i = 0; i < k1; i++)
		{
			char st1[10];
			char st2[10];
			strcpy(st1, str1);
			strcpy(st2, str2);
			char str[10] = { '\0' };
			char* s1 = st1;
			char* s2 = st2;
			char* s = str;

			strncpy(s, s2, i);

			strcpy(s2, s2 + i);

			strcat(s2, s);

			if (strcmp(st1, st2) == 0)
			{
				printf("是\n");
				break;
			}
			
		}
		if (i == k1)
		{
			printf("不是\n");
		}
	}

	return 0;
}

//int main()
//{
//	char arr[100] = "\0";
//	gets(arr);
//
//	puts(arr);
//
//	return 0;
//}