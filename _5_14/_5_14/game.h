#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 80
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void chushihua(char arr2[ROWS][COLS],int rows,int cols, char set);
void saolei(char arr2[ROWS][COLS],int row, int col);
void setarr(char arr2[ROWS][COLS],int row, int col);
void kaishi(char arr[ROWS][COLS], char show[ROWS][COLS], int row, int col);