#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <memory.h>

void* my_memmove(void* dest, void* sour, size_t num)
{
	void* ret = dest;
	if (dest < sour)
	{
		while (num--)
		{
			*(char*)dest = *(char*)sour;
			dest = (char*)dest + 1;
			sour = (char*)sour + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)sour + num);

		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	
	memmove(arr1 + 2, arr1, sizeof(arr1));
	my_memmove(arr2 + 2, arr2, sizeof(arr2));

	return 0;
}

//void* my_memcpy(void* dest, void* sour, size_t num)
//{
//	void* ret = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)sour;
//		dest = (char*)dest + 1;
//		sour = (char*)sour + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[20] = { 0 };
//	int arr3[20] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	my_memcpy(arr3, arr1, sizeof(arr1));
//
//	return 0;
//}