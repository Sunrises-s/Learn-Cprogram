//include header files
#include <stdio.h>
#include <stdlib.h>
//�궨��
#define ROW    3
#define COL	   3

//��������
void initboard(char str[][COL]);
void display_board(char str[ROW][COL]);
void player_move(char str[][COL]);
void pc_move(char str[][COL]);
char is_win(char str[][COL]);