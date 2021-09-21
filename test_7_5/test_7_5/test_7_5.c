#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void circle1()
//{
//
//}
//
//void circle2()
//{
//
//}
//
//int main()
//{
//
//
//	return 0;
//}

//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//void swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        *((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//            {
//                swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 3, 5, 2, 0, 4, 11, 7, 8, 1, 15 };
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
struct stu
{
	char name[20];
	int age;
};


int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

int cmp_char(const void* p1, const void* p2)
{
	if ((*(char*)p1 != '\0') && (*(char*)p2) != '\0')
	{
		return *(char*)p1 - *(char*)p2;
	}
	else
	{
		return 1;
	}
}

int cmp_struct_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
}

int cmp_struct_name(const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}



int main()
{
	int arr1[] = { 7, 19, 2, 5, 1, 15, 7 };
	char arr2[] = "cbdea";
	struct stu s[] = { {"zhangsan", 22}, {"lisi", 13}, {"wangwu", 19} };

	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp_int);
	
	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");


	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp_char);

	printf("%s\n", arr2);


	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_age);

	for (int i = 0; i < (sizeof(s) / sizeof(s[0])); i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}

	printf("\n");


	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_name);

	for (int i = 0; i < (sizeof(s) / sizeof(s[0])); i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}

	return 0;
}
