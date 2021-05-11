#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define mines 10

void InitBoard(char board[ROWS][COLS],int row,int col, char set);

void DisPlay(char board[ROWS][COLS], int row, int col);

void SetMine(char board[ROWS][COLS], int row,int col);

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);