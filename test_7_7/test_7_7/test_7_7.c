#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n, i, j;
//
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n; j++)
//        {
//            if (i == j || j == n + 1 - i)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    int arr[7];
//    int i;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int max = arr[0];
//    int min = arr[0];
//    int s = 0;
//    for (i = 0; i < 7; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//        s += arr[i];
//    }
//    printf("%.2f", (s - min - max) / 5);
//
//	return 0;
//}

//int main()
//{
//    int arr[50] = { 0 };
//    int N;
//    int m;
//    int i;
//
//    scanf("%d", &N);
//
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    scanf("%d", &m);
//
//    for (i = N - 1; i >= 0; i--)
//    {
//        if (arr[i] > m)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//
//
//
//    for (i = 0; i <= N; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//	return 0;
//}

int main()
{
    int arr1[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int arr2[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year;
    int month;

    while (scanf("%d%d", &year, &month) != EOF)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            printf("%d\n", arr2[month - 1]);
        }
        else
        {
            printf("%d\n", arr1[month - 1]);
        }
    }

    return 0;
}