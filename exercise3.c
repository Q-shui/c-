#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
//��д���룬��ʾ����ַ��������ƶ������м���
int main()
{
	char arr1[] = "welcome to my code";//�ַ������鶨����ʽ
	char arr2[] = "##################";//ע���ַ����ĺ��滹��һ��\n,��������sizeof���ַ������ȵ�ʱ��Ҫ-2
	//��right = sizeof(arr1) / sizeof(arr1[0]) - 2
	//���߿��������ַ������Ⱥ���right = strlen(arr1)-1Ҳ��ĩλ���±�
	//strlen()��ͷ�ļ���#include <string.h>
	int left = 0, right = 0;
	for (left = 0,right = sizeof(arr1)/sizeof(arr1[0])-2;left <= right;left++,right--)
	//ѭ����ʱ��left��������right���ϼ�С�ʵ�left��rightʱѭ��ֹͣ
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//ÿ��ӡһ����Ϣһ��
		Sleep(1000);//��λ�Ǻ��룬ͷ�ļ���#include <windows.h>
		system("cls");//ִ��ϵͳ�����һ��������ͷ�ļ���#include <stdlib.h>
		//cls�������Ļ
	}
	printf("%s\n", arr2);
	//��д����ʵ�֣�ģ���û���½�龰������ֻ�ܵ�¼����
	//��ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ��������˳�����
	//my code
	// password[] = {"123456"};
	char password[20] = { "123456" };
	char password2[20] = { 0 };
	int ret = 0;
	
	int i = 0;
	int t = 3 - i;
	for (i = 1;i<=3;i++)
	{
		printf("���������룺");
		scanf("%s", &password2);
		
		if (strcmp(password2 ,password))//==���������ж������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
		//�⺯��strcmp��ͷ�ļ�����Ϊ#include <sring.h>
			printf("����������������룬����ʣ%d�λ���\n", t);
		else
		{
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i > 3)
	{
		printf("�������������ȷ���˳�����\n");
		
	}
	
	return 0;
}
