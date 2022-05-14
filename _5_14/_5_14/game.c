#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void chushihua(char arr2[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= cols; j++)
		{
			arr2[i][j] = set;
		}
	}
}


void saolei(char arr2[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= col; i++)
	{
		printf("   %d   ", i);
	}
	printf("\n\n");
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf("   %c   ", arr2[i][j]);
		}
		printf("\n\n");
	}
}


void setarr(char arr2[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr2[x][y] == '0')
		{
			arr2[x][y] = '1';
			count--;
		}
	}
}


int get_arr_count(char arr[ROWS][COLS], int x, int y)
{
	    return arr[x - 1][y] +
		arr[x - 1][y - 1] +
		arr[x][y - 1] +
		arr[x + 1][y - 1] +
		arr[x + 1][y] +
		arr[x + 1][y + 1] +
		arr[x][y + 1] +
		arr[x - 1][y + 1] - 8 * '0';
}


void kaishi(char arr[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		printf("请输入排查雷的坐标：");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x][y] == '1')
			{
				printf("很遗憾，你踩雷了\n");
				saolei(arr, ROW, COL);
				break;
			}
			else
			{
				int count = get_arr_count(arr, x, y);
				show[x][y] = count + '0';
				saolei(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法请重新输入：");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("排雷成功！\n");
		saolei(arr, ROW, COL);
	}
}