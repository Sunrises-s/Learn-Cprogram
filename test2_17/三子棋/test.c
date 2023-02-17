#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>

void menu(void)
{
	printf("*******************************************************************\n");
	printf("*********************        1. play      *************************\n");
	printf("*********************        0. exit      *************************\n");
	printf("*******************************************************************\n");
}

void game(void)
{
	//存放数据
	char str[ROW][COL]; //棋子
	//初始化棋盘
	initboard(str);
	//打印棋盘
	display_board(str);
	while (1) 
	{
		//玩家走一步
		player_move(str);
		display_board(str);
		if ('*' == is_win(str)) 
		{ 
			printf("玩家获胜\n");
			break; 
		}//判断玩家赢
		if ('Q' == is_win(str))
		{
			printf("平局\n");
			break;
		}
		//电脑走一步
		pc_move(str);
		display_board(str);
		is_win(str);
		if ('#' == is_win(str)) 
		{ 
			printf("电脑获胜\n");
			break; 
		}//判断电脑赢
		if ('Q' == is_win(str))
		{
			printf("平局\n");
			break;
		}
	}
}

int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			return 0;
		default:
			printf("输入错误, 请重新输入\n");
			break;
		}
	} while (1);

	return 0;
}
