#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
//�ַ�����������strcpy(),��һ����ַ���ַ�����������һ����ַ
//�����÷���strcpy(Ŀ�ĵأ�Դͷ)
//���磺
	char arr[] = "hello";
	char arr2[10] = "0";
	strcpy(arr2,arr);
	printf("%s\n", arr2);
//memset - memory set�ڴ�����
//void * memset ( void * ptr, int value, size_t num ) ptr��Ҫ�����ڴ�飬value��Ҫ���õ�ֵ num��Ҫ���õ�ֵ�ĸ���
//����ڴ��  
//Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).
	char arr3[] = "hello world";
	memset(arr3, '*', 5);//*�����ASIIֵ�����������ͱ���
	printf("%s\n", arr3);
//����������ַ�����ԭ�ַ���������ᵼ����ֵ�����

//�Զ��庯��
//��ɣ�
//���������������ͣ���������

	return 0;
}