#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


void initboard(char board[ROW][COL], int row, int col);

void displayboard(char board[ROW][COL], int row, int col);

void playeract(char board[ROW][COL], int row, int col);

void computeract(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);