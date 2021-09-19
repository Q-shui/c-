#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

void fun(int* a, int n, int odd, int even)
{
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) % 2 == 1)
		{
			odd += *(a + i);
		}
		else
		{
			even += *(a + i);
		}
	}
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* p = a;
	int odd = 0;
	int even = 0;

	fun(p, sizeof(a) / sizeof(a[0]), odd, even);

	printf("%d %d", odd, even);

	return 0;
}

//int px(int x, int n)
//{
//	if (n > 0)
//	{
//		return pow(x, n) * pow(-1, (n - 1)) + px(x, n - 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int x = 2;
//	int n = 3;
//
//	int y = px(x, n);
//
//	printf("%d", y);
//
//	return 0;
//}

//int DigitSum(int x)
//{
//	if (x / 10 != 0)
//	{
//		return (x % 10) + DigitSum(x / 10);
//	}
//	else
//	{
//		return x;
//	}
//}
//
//int main()
//{
//	int a = 1729;
//
//	int add = DigitSum(a);
//
//	printf("%d", add);
//
//	return 0;
//}

//void fun(int* a, int n, int* odd, int* even)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (*(a + i) % 2 == 1)
//		{
//			*odd += *(a + i);
//		}
//		else
//		{
//			*even += *(a + i);
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = a;
//	int odd = 0;
//	int even = 0;
//	int* o = &odd;
//	int* e = &even;
//
//	fun(p, sizeof(a) / sizeof(a[0]), o, e);
//
//	printf("%d %d", odd, even);
//
//	return 0;
//}


//bool isValid(char* s) 
//{
//	bool ans = true;
//	if (s)
//	{
//		char* stack = (char*)calloc(strlen(s) + 1, sizeof(char));
//		int i, top = -1;
//		for (i = 0; s[i]; ++i)
//		{
//			if (s[i] == '(' || s[i] == '[' || s[i] == '{' || top == -1)
//				stack[++top] = s[i];
//			else if (s[i] == stack[top] + 1 || s[i] == stack[top] + 2)
//				--top;
//			else {
//				ans = false;
//				break;
//			}
//		}
//		free(stack);
//		if (top > -1) ans = false;
//	}
//	
//	return ans;
//}
//
//
//int main()
//{
//    char a = "()[]{}";
//    char* s = &a;
//    printf("%d", isValid(s));
//
//	return 0;
//}

//int removeDuplicates(int* nums, int numsSize)
//{
//    int i = 1;
//    int j = 0;
//    int count = 0;
//    int a = 0;
//    for (a = 0; a < numsSize - count - 1; a++)
//    {
//        for (i = 1; i < numsSize - count; i++)
//        {
//            if (*(nums + a) == *(nums + a + i))
//            {
//                for (j = a + i; j < numsSize - count; j++)
//                {
//                    *(nums + j) = *(nums + j + 1);
//                }
//                count++;
//                i--;
//            }
//        }
//    }
//    
//    return numsSize - count;
//}
//
//int main()
//{
//    int nums[] = { 1, 1 };
//    int* p = nums;
//    int len = removeDuplicates(p, sizeof(nums) / sizeof(nums[0]));
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//}