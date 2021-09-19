#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int* value(int* p)
{
	if (*p < 0)
	{
		*p = -*p;
	}
	return p;
}

int main()
{
	int a;
	scanf("%d", &a);
	int* p = &a;

	int* p1 = value(p);

	printf("%d", *p1);

	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	char s[] = "aabbcc";
//	char* ps = s;
//	char s1[10] = "\0";
//	char* ps1 = s1;
//	int i = 0;
//	*ps1 = *ps;
//	while (*ps != '\0')
//	{
//		if (*ps != *(ps1 + i))
//		{
//			i++;
//			*(ps1 + i) = *ps;
//		}
//		ps++;
//	}
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char* output_long(char str[]) {
//	static char s[1024];
//	int right;//记录当前遍历的单词末尾字母的下标
//	int count1 = 0;//记录当前遍历到的单词长度
//	int count2 = 0;//记录遍历过的所有单词中最长的长度
//	for (int i = 0; i < (int)strlen(str); ++i) {
//		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
//			++count1;
//			continue;
//		}
//		if (count1 > count2) {
//			count2 = count1;
//			right = i;
//		}
//		count1 = 0;//未跳出循环则说明上一个单词遍历结束，count1置0，便于记录下一个单词的长度
//	}
//	for (int i = 0; i < count2; ++i) {
//		s[i] = str[i + right - count2];
//	}
//	return s;
//}
//int main() 
//{
//	char str[1024] = "i like beijing.";
//	printf("字符串为:%s\n", str);
//	printf("字符串中最长的单词为:%s\n", output_long(str));
//	return 0;
//}

//int main()
//{
//	char str[100];
//	scanf("%[^\n]", str);
//	int i = 0, j = 0, max = 0;
//	strcat(str, " ");
//	while (str[i] != '\0' && str[j] != '\0')
//	{
//		while (str[j] != ' ')
//			j++;
//		if (max < j - i)
//			max = j - i;
//		i = j + i;
//		j = j + 1;
//	}
//
//	printf("%s\n", s1);
//	return 0;
//}

//void f(int a, int b)
//
//{
//
//    int t;
//
//    t = a; a = b; b = t;
//
//}
//
//int main()
//
//{
//
//    int x = 1, y = 3, z = 2;
//
//    if (x > y) f(x, y);
//
//    else if (y > z) f(x, z);
//
//    else f(x, z);
//
//    printf("%d,%d,%d\n", x, y, z);
//
//    return 0;
//
//}

//int main()
//{
//    int m, n;
//
//    scanf("%d%d", &m, &n);
//
//    while (m != n)
//
//    {
//
//        while (m > n) m -= n;
//
//        while (n > m) n -= m;
//
//    }
//    printf("%d\n", m);
//    return 0;
//}



//int searchInsert(int* nums, int numsSize, int target)
//{
//    int i;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (*(nums + i) == target)
//        {
//            return i;
//        }
//        else if (*(nums + i) > target)
//        {
//            return i;
//        }
//    }
//    return i;
//}
//
//int main()
//{
//    int a[] = { 1 };
//    int b = 0;
//
//    printf("%d\n", searchInsert(a, sizeof(a) / sizeof(a[0]), b));
//
//    return 0;
//}

//int strStr(char* haystack, char* needle)
//{
//    int i, j;
//    if (*needle == '\0')
//    {
//        return 0;
//    }
//    for (i = 0; *(haystack + i) != '\0'; i++)
//    {
//        if (*(haystack + i) == *needle)
//        {
//            for (j = 0; *(needle + j) != '\0'; j++)
//            {
//                if (*(haystack + i + j) != *(needle + j))
//                {
//                    break;
//                }
//            }
//            if (*(needle + j) == '\0')
//            {
//                return i;
//            }
//        }
//    }
//    return -1;
//}

//int strStr(char* haystack, char* needle)
//{
//    return haystack.find(needle);
//}
//
//int main()
//{
//    char a[] = "aaaaa";
//    char b[] = "";
//
//    printf("%d\n", strStr(a, b));
//
//	return 0;
//}