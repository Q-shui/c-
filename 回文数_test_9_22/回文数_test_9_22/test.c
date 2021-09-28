#include <stdio.h>
#include <stdbool.h>

int reverse(int n);
bool isPalindrome(int x);
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

bool isPalindrome(int n)
{
	if (n < 0)
		return false;
	if (n == reverse(n))
		return true;
	else
		return false;

}
void Test()
{
	printf("%d\n", isPalindrome(-121));
}
