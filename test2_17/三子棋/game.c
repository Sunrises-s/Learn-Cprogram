#include "game.h"
//初始化棋盘
void initboard(char str[][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) 
		{
			str[i][j] = ' ';
		}
	}
}

//打印棋盘
void display_board(char str[ROW][COL])
{

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (j < COL - 1) 
			{
				printf(" %c |", str[i][j]);
			}
			else 
			{
				printf(" %c ", str[i][j]);
			}
		}
		printf("\n");
		if (i < ROW - 1) 
		{
			for (int k = 0; k < COL; k++)
			{
				if (k < COL - 1)
				{
					printf("---|");
				}
				else
				{
					printf("---");
				}
			}
			printf("\n");
		}
	}
}

void player_move(char str[][COL])
{
	int x, y;
	while(1)
	{
		printf("请输入:>");
		scanf("%d %d", &x, &y);
		x--;//更新为数组下标
		y--;
		//判断坐标的合法性
		if (x < ROW && y < COL && str[x][y] == ' ')
		{
			str[x][y] = '*';
			break;
		}
		else
		{
			printf("坐标输入错误, 请重新输入.\n");
		}
	}
}

void pc_move(char str[][COL])
{
	printf("电脑走:\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (str[x][y] == ' ')
		{
			str[x][y] = '#';
			break;
		}
	}
}
//判断输赢, 玩家赢返回* 电脑赢返回# 平局返回Q 继续返回C
char is_win(char str[][COL])
{
	//判断行
	for (int i = 0; i < ROW; i++)
	{
		if (str[i][0] == str[i][1] && str[i][1] == str[i][2])
		{
			if (str[i][0] == '*') { return '*'; }
			else if (str[i][0] == '#') return '#';
		}
	}
	//判断列相等
	for (int i = 0; i < COL; i++)
	{
		if (str[0][i] == str[1][i] && str[1][i] == str[2][i])
		{
			if (str[0][i] == '*') { return '*'; }
			else if (str[0][i] == '#')  return '#';
		}
	}
	//判断斜线
	if (str[0][0] == str[1][1] && str[1][1] == str[2][2])
	{
		return str[0][0];
	}
	if (str[2][0] == str[1][1] && str[1][1] == str[0][2])
	{
		return str[1][1];
	}
	//判断继续
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (str[i][j] != ' ') { return 'C'; }
		}
	}
	//平局
	return 'Q';
}
