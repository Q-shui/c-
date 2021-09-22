#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct
{
	int a;
	char b;
	short c;
	short d;
}A;

int main()
{
	int x = 10;
	x += x *= x -= x / 3;
	const char* p = "hello";
	printf("%d %c %d", sizeof(A),*p, x);

	return 0;
}

//int Find_num(int** arr, int row, int col, int num)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		if (arr[i][i] < num)
//		{
//			continue;
//		}
//		else if (arr[i][i] > num)
//		{
//			for (j = i - 1; j >= 0; )
//			{
//				if (arr[i][j] > num)
//				{
//					j--;
//					continue;
//				}
//				else if (arr[i][j] < num)
//				{
//					i++;
//				}
//				else
//				{
//					return 1;
//				}
//				if (i == 4)
//				{
//					return 0;
//				}
//			}
//		}
//		else
//		{
//			return 1;
//		}
//
//	}
//	if (arr[row-1][col-1] < num)
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
//	int k = 8;
//
//	printf("%d", Find_num((int**)arr, 4, 4, k));
//
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//
//int main()
//{
//	int arr[4][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,14, 15, 16, 17, 18, 19, 20 };
//	printf("%d", *(arr[1] + 3));
//
//	return 0;
//}
//10011
//10111
//10011
//10111