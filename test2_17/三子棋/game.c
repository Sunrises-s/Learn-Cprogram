#include "game.h"
//��ʼ������
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

//��ӡ����
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
		printf("������:>");
		scanf("%d %d", &x, &y);
		x--;//����Ϊ�����±�
		y--;
		//�ж�����ĺϷ���
		if (x < ROW && y < COL && str[x][y] == ' ')
		{
			str[x][y] = '*';
			break;
		}
		else
		{
			printf("�����������, ����������.\n");
		}
	}
}

void pc_move(char str[][COL])
{
	printf("������:\n");
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
//�ж���Ӯ, ���Ӯ����* ����Ӯ����# ƽ�ַ���Q ��������C
char is_win(char str[][COL])
{
	//�ж���
	for (int i = 0; i < ROW; i++)
	{
		if (str[i][0] == str[i][1] && str[i][1] == str[i][2])
		{
			if (str[i][0] == '*') { return '*'; }
			else if (str[i][0] == '#') return '#';
		}
	}
	//�ж������
	for (int i = 0; i < COL; i++)
	{
		if (str[0][i] == str[1][i] && str[1][i] == str[2][i])
		{
			if (str[0][i] == '*') { return '*'; }
			else if (str[0][i] == '#')  return '#';
		}
	}
	//�ж�б��
	if (str[0][0] == str[1][1] && str[1][1] == str[2][2])
	{
		return str[0][0];
	}
	if (str[2][0] == str[1][1] && str[1][1] == str[0][2])
	{
		return str[1][1];
	}
	//�жϼ���
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (str[i][j] != ' ') { return 'C'; }
		}
	}
	//ƽ��
	return 'Q';
}
