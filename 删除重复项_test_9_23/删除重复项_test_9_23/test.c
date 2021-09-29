#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main(void)
{


	return 0;
}

int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize <= 1)
    {
        return numsSize;
    }

    int src = 0;
    int dst = 0;

    for (src = 0; src < numsSize; src++)
    {
        if (nums[src] != nums[dst])
        {
            dst++;
            nums[dst] = nums[src];
        }
    }

    return dst + 1;
}