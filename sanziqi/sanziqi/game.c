#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char board[ROW][COL], int x, int y)
{
	int i = 0;
	for (i = 0;i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int x, int y)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c", board[i][j]);
			if (j < COL - 1)
				printf(" |");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}

void playboard(char board[ROW][COL],int x, int y)
{
	while (1)
	{
		printf("玩家下棋：>");
		int m = 0;
		int n = 0;
		scanf("%d %d", &m, &n);
		if (m > 0 && m <= ROW && n > 0 && n <= COL)
		{
			if (board[m - 1][n - 1] == ' ')
			{
				board[m - 1][n - 1] = '*';
				break;
			}
			else {
				printf("已被占用请重新输入\n");
			}
		}
		else {
			printf("数据非法，请重新输入\n");
		}
	}
	

}

void botboard(char board[ROW][COL], int x, int y)
{
	int m = 0;
	int n = 0;
	while (1)
	{
		m = rand() % ROW;
		n = rand() % COL;
		if (board[m][n] == ' ')
		{
			board[m][n] = '#';
			break;
		}
	}
	printf("电脑下:>\n");
}

int isfull(char board[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] != ' ')
				return 0;
		}
	}
	return 1;
}

char iswin(char board[ROW][COL], int x, int y)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][2] && board[i][2] == board[i][3] && board[i][1] != ' ')
			return board[i][0];
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[1][1] == board[0][0] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	if (isfull(board, ROW, COL) == 1)
	{
		return 'q';
	}
	return 'c';
}