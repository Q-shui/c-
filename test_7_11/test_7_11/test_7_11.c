#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i, j;
	int a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)
				break;
			a++;
		}
		a++;
	}
	printf("%d", a);

	return 0;
}

//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int* q[4];
//	int k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d", q[3][1]);
//
//	return 0;
//}