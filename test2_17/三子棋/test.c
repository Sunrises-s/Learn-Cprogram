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
	//�������
	char str[ROW][COL]; //����
	//��ʼ������
	initboard(str);
	//��ӡ����
	display_board(str);
	while (1) 
	{
		//�����һ��
		player_move(str);
		display_board(str);
		if ('*' == is_win(str)) 
		{ 
			printf("��һ�ʤ\n");
			break; 
		}//�ж����Ӯ
		if ('Q' == is_win(str))
		{
			printf("ƽ��\n");
			break;
		}
		//������һ��
		pc_move(str);
		display_board(str);
		is_win(str);
		if ('#' == is_win(str)) 
		{ 
			printf("���Ի�ʤ\n");
			break; 
		}//�жϵ���Ӯ
		if ('Q' == is_win(str))
		{
			printf("ƽ��\n");
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
		printf("������:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			return 0;
		default:
			printf("�������, ����������\n");
			break;
		}
	} while (1);

	return 0;
}
