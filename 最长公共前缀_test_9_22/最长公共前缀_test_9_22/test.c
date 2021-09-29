#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize);
void Test();

int main(void)
{
    Test();

	return 0;
}

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    int i, j, flag = 0;

    for (i = 0; i < strlen(strs[0]); i++) // i为二维矩阵的列，表示每个字符串的长度
    {
        for (j = 1; j < strsSize; j++) // j为二维矩阵的行，表示有多少个字符串，每个位置存储的是单个字符
        {
            // 留第一行str[0][i]作为对比用，j从第二行开始扫描
            if (strs[j][i] != strs[0][i])// 当扫描到某i列时，第j行的单个字符不等于第一行单个字符
            {
                strs[0][i] = '\0';                 // 将此列第一行的单个字符改变为结束符
                flag = 1;                          // 将哨兵置为1，代表已找到公共前缀
                break;
            }
        }
        if (flag == 1)                             // 若哨兵为1，则没必要继续外层for循环的下一列扫描，直接返回公共前缀
            return strs[0];
    }
    return strs[0];// 若扫描到最外层循环结束，即第一个字符串整体结束程序没有break，则第一个字符串就是公共前缀           
}

void Test()
{
    char strs[][10] = { "flower", "flow", "flight" };

    printf("%s\n", longestCommonPrefix(strs, 7));
}