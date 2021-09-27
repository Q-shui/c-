#include <stdio.h>
#include <malloc.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(void)
{
	int nums[] = { 3, 3 };
	int target = 6;
	int returnSize = 0;
	int* p = &returnSize;
	int* returnnums = twoSum(nums, sizeof(nums) / sizeof(nums[0]), 6, p);

	return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int* a = (int*)malloc(sizeof(int) * 2);

	for (int i = 0; i < numsSize; i++)
	{
		for (int j = 0; j < numsSize && j != i; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				a[0] = j;
				a[1] = i;

				*returnSize = 2;
				return a;
			}
		}
	}

	*returnSize = 0;
	return a;

}