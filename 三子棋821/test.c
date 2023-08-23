#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



void menu()
{
	printf("******************************\n");
	printf("*****   1.play  0.exit   *****\n");
	printf("******************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	initboard(board, ROW, COL);;
	displayboard(board, ROW, COL);
	while (1)
	{
		playeract(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);

		computeract(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);

	}
	if (ret == '*')
	{
		printf("you win!\n");
	}
	else if (ret == '#')
	{
		printf("you lose!\n");
	}
	else
	{
		printf("draw!\n");
	}
	displayboard(board, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("Please Inputing£º");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Begin game!\n");
			game();
			break;
		case 0:
			printf("Exit game!\n");
			break;
		default:
			printf("Inputing wrong£¡\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	

	return 0;

}