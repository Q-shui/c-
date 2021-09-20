#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int my_strlen(char* str)
//{
//	int len = 0;
//	while (*str++ != '\0')
//	{
//		len++;
//	}
//	return len;
//}
//
//int main()
//{
//	char a[] = "abcdef";
//
//	printf("%d", my_strlen(a));
//
//	return 0;
//}

//void my_strcpy(char* str1, char* str2)
//{
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "hello";
//
//	my_strcpy(str1, str2);
//
//	printf("%s\n%s", str1, str2);
//
//	return 0;
//}

//int main()
//{
//	int k = 0;
//
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		if ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D') == 3)
//		{
//			printf("%c", k);
//		}
//	}
//
//	return 0;
//}

//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；

//int main()
//{
//	int A, B, C, D, E;
//	
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (((B == 2) + (A == 3) == 1)
//							&& ((B == 2) + (E == 4) == 1)
//							&& ((C == 1) + (D == 2) == 1)
//							&& ((C == 5) + (D == 3) == 1)
//							&& ((E == 4) + (A == 1) == 1)
//							&& (A * B * C * D * E == 120))
//							printf("A = %d, B = %d, C = %d, D = %d, E = %d", A, B, C, D, E);
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

