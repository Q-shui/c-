#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//	ret_type fun_name(para1,*)
//	{
//		statement
//	}
//ret_type ��������
//fun_name ������
//para1 ��������
// �����β�ֻ��ʵ�ε�һ����ʱ���������βεĸı��ǲ���ı�ʵ�εģ�������ʵ�κ��β�ռ�ò�ͬ�ڴ��
// ����ʵ�� ���ݸ�������ֵ �������ab
// �����β� ���庯��ʱ���������ֵ��xy
//ʵ�δ��ݸ��βε�ʱ���������ȷ����ֵ��ʵ��Ҳ�����Ǻ����������������ȷ����ֵ
//����1
//���������еĽϴ�ֵ
int MAX(int x, int y)
{
	int c;
	if (x < y)
		c = y;
	else
		c = x;
	return c;
}
int max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
//�����Ż�
int get_max(int x, int y)
{
	return x > y ? x : y;
}
//����2
//����������������
//�޷������ͺ�����void
void swap1(int x, int y)
{
	int c = x;
	x = y;
	y = c;
}
//���ֺ���������
//����������xy�ĵ�ַ��ab�Ĳ�ͬ������xy������abû��ϵ
//���Կ�����ָ������ɺ���
//�����޸�
void swap2(int* px, int* py)
{
	int c = 0;
	c = *px;
	*px = *py;
	*py = c;
}
//��������
//��ֵ���úʹ�ַ����
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int max1=MAX(a, b);
	int max2 = get_max(a, b);
	printf("%d\n", max1);
	printf("%d\n", max2);
	//swap(a, b);
	//printf("a=%d b=%d", a, b);
	//��ʱ��ӡ��ab��û�н���
	int q = 10;
	int* pq = &q;//pq��ָ�����
	*pq = 20;//�����ò�������ʱq��ֵ��Ϊ20�������ĵ�ַû��
	swap2(&a, &b);//��ab�ĵ�ַ����ȥ
	printf("a=%d b=%d", a, b);

	return 0;
}
