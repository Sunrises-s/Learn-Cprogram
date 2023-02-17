//include header files
#include <stdio.h>
#include <stdlib.h>
//宏定义
#define ROW    3
#define COL	   3

//函数声明
void initboard(char str[][COL]);
void display_board(char str[ROW][COL]);
void player_move(char str[][COL]);
void pc_move(char str[][COL]);
char is_win(char str[][COL]);