#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
	//�ô�
	char password1[20] = { 0 };
	int ret1 = 0;
	printf("����������:>");
	scanf("%s", &password1);//�������룬�������password��
	printf("��ȷ��(Y/N):>");//��������֮���˻س�����getchar���գ����س�\n��ASII��ֵΪ10
	//����else�������ʻ�ֱ���������ȷ��
	ret1 = getchar();
	if (ret1 == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	//�������뺯������ִ�е�ʱ�����һ�����뻺�����������������ʱ��
	//��������ʱ���˻س��������ڻ���������һ��\n
	//��passwordֻ��ȡ���֣�����\n
	//����getchar��ȡ\n���������ȷ��
	//�����ټ���һ��getchar(),����\n
	//����������˶�����ַ���һ�������ַ������Ͳ�����
	//��ʱ��Ҫwhileѭ��
	char password[20] = { 0 };
	int ret = 0;
	char ch = 0;
	printf("����������:>");
	scanf("%s", &password);
	while((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}

	return 0;
}

