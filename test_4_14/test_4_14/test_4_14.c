#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int max = Max(a, b);
	printf("%d\n", max);
	return 0;
}