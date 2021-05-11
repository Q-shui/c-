#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*******   1.play   *******\n");  
	printf("*******   2.exit   *******\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//������
	SetMine(mine, ROW, COL);
	
	//��ӡ����
	//DisPlay(mine, ROW, COL);//����ӡ
	DisPlay(show, ROW, COL);

	//�Ų���
	FindMine(mine,show, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while(input);
	return 0;
}