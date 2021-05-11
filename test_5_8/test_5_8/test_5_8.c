#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int temp,i;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };
	for (i = 0; i < 10; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
//void init(int a[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = 0;
//	}
//}
//void print(int a[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void reverse(int a[],int l)
//{
//	int temp = 0,i = 0;
//	while (l > 0)
//	{
//		temp = a[i];
//		a[i] = a[i + l - 1];
//		a[i + l - 1] = temp;
//		i++;
//		l -= 2;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	print(arr);
//	printf("\n");
//	reverse(arr,length);
//	print(arr);
//	printf("\n");
//	init(arr);
//	print(arr);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 4, 2, 5, 3, 9, 10, 6, 1, 11, 7 };
//	int i, j, temp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}