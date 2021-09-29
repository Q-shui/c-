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

    for (i = 0; i < strlen(strs[0]); i++) // iΪ��ά������У���ʾÿ���ַ����ĳ���
    {
        for (j = 1; j < strsSize; j++) // jΪ��ά������У���ʾ�ж��ٸ��ַ�����ÿ��λ�ô洢���ǵ����ַ�
        {
            // ����һ��str[0][i]��Ϊ�Ա��ã�j�ӵڶ��п�ʼɨ��
            if (strs[j][i] != strs[0][i])// ��ɨ�赽ĳi��ʱ����j�еĵ����ַ������ڵ�һ�е����ַ�
            {
                strs[0][i] = '\0';                 // �����е�һ�еĵ����ַ��ı�Ϊ������
                flag = 1;                          // ���ڱ���Ϊ1���������ҵ�����ǰ׺
                break;
            }
        }
        if (flag == 1)                             // ���ڱ�Ϊ1����û��Ҫ�������forѭ������һ��ɨ�裬ֱ�ӷ��ع���ǰ׺
            return strs[0];
    }
    return strs[0];// ��ɨ�赽�����ѭ������������һ���ַ��������������û��break�����һ���ַ������ǹ���ǰ׺           
}

void Test()
{
    char strs[][10] = { "flower", "flow", "flight" };

    printf("%s\n", longestCommonPrefix(strs, 7));
}