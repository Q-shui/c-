#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", *p.a);
//
//	return 0;
//}

//void my_reverse(char* str)
//{
//	char* p1 = str;
//	char* p2 = str;
//	char temp;
//
//	while (*p2 != '\0')
//	{
//		p2++;
//	}
//	p2--;
//	while ((p2 - p1) > 0)
//	{
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	char* str = arr;
//
//
//	my_reverse(arr);
//
//	printf("%s", arr);
//
//	return 0;
//}

//int main()
//{
//	int n = 13;
//	int i, j;
//
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 1; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 7 - i; j <= 7 + i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = i; j < 13 - i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int total = 20;
//	int i;
//
//	while (a > 1)
//	{
//		total += (a / 2);
//		i = a % 2;
//		a = (a / 2) + i;
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}

int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}

//int main()
//{
//	int arr[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7 };
//	int l1 = sizeof(arr) / sizeof(arr[1]);
//	int b1[] = { 0 };
//	int b2[] = { 0 };
//	int* p1 = b1;
//	int* p2 = b2;
//	int lb1, lb2;
//
//	for (int i = 0; i < l1; i++)
//	{
//		if ((arr[i] % 2) == 1)
//		{
//			*p1 = arr[i];
//			++p1;
//		}
//		if ((arr[i] % 2) == 0)
//		{
//			*p2 = arr[i];
//			++p2;
//		}
//	}
//	lb1 = sizeof(b1) / sizeof(b1[0]);
//	lb2 = sizeof(b2) / sizeof(b2[0]);
//
//	for (int i = 0; i < lb1; i++)
//	{
//		arr[i] = b1[i];
//	}
//	for (int i = 0; i < lb2; i++)
//	{
//		arr[i + lb1] = b2[i];
//	}
//
//	for (int i = 0; i < l1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void trim(int arr[], int length)
//{
//	int left = 0;
//	int right = length - 1;
//
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//
//
//}
//
//int main()
//{
//	int arr[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	trim(arr, length);
//
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

