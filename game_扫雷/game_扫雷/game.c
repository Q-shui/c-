#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisPlay(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----ɨ����Ϸ-----\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----ɨ����Ϸ-----\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = mines;//������
	while (count)
	{
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


static void get_mine_count(char mine[ROWS][COLS], char show[ROWS][COLS],int x, int y)
{
	if (show[x][y] == '*')
	{
		int count = mine[x - 1][y - 1] +
			mine[x - 1][y] +
			mine[x - 1][y + 1] +
			mine[x][y - 1] +
			mine[x][y + 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] -
			8 * '0';
		show[x][y] = count + '0';
		if (count == 0)
		{
			get_mine_count(mine, show, x - 1, y);
			get_mine_count(mine, show, x, y - 1);
			get_mine_count(mine, show, x, y + 1);
			get_mine_count(mine, show, x + 1, y);
		}
	
	}
}

static int Judge(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	//1.�����Ų��׵�����
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	//2.������괦�ǲ�����
	//	��1�����ף����ź�ը����
	//	��2�������ף�ͳ��������Χ�м����ף��洢�Ų鵽���׵���Ϣ��show���飬��Ϸ����

	int x, y;
	while (1)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisPlay(mine, ROW, COL);
				break;
			}
			else
			{
				get_mine_count(mine,show, x, y);
				DisPlay(show, ROW, COL);
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
		int count = Judge(show, ROW, COL);
		if (count == mines)
		{
			printf("����ʤ�ˣ�\n");
			break;
		}
	}

}