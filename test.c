#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
//�жϲ����100���ڵ�����
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	/*int day = 0;
	* scanf("%d",&day);
	if (day == 1)
		printf("����һ\n");
	else if (day == 2)
		prinf("���ڶ�\n");
	else...*/
	//�����Ĵ���̫������
	//switch��� �����ڶ��֧����
//swtich(���α��ʽ��
//{
//	�����		�������һЩcase���
//}
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;		
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	}
	//switch���ִ�й���
	//�ж�switch()�е�����Ǽ���Ȼ����뵽��Ӧ��case����У�ִ���������break����ȥ
	//�����ڱ��������ͱ��ʽ	�������ý������������
	//case������������ͳ��������ͱ��ʽҲ����1+1���������Ϊ׼
	//��һ��ÿ����䶼Ҫbreak
	int day1 = 0;
	scanf("%d", &day1);
	switch(day1)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;//ϰ��Ҫ����break
	default://���day1û���������������Ĭ�����		���п��������Ҫ�����Ǵ���Ƿ�״��
		printf("�������\n");
//default���Է���ǰ�棬ϰ�߷ź���
//ע��ð��
//case�������Ƕ��if���
	}

	return 0;
}
