#include <stdio.h>

int reverse(int n);
void Test();

int main(void)
{
	Test();

	return 0;
}

int reverse(int n)
{
	int k = 0;

	while (n)
	{
		k = (k * 10) + (n % 10);
		n /= 10;
	}

	return k;

}

void Test()
{
	printf("%d\n", reverse(123));

}
