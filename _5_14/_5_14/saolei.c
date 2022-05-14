#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"


//图形界面
void UI()
{
	printf("*******************\n");
	printf("***   1.play   ****\n");
	printf("***   2.exit   ****\n");
	printf("*******************\n");
}


//游戏实现函数
void game()
{
	printf("欢迎来到扫雷\n");

	char arr[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	chushihua(arr, ROWS, COLS, '0');
	chushihua(show, ROWS, COLS, '*');

	//saolei(arr, ROW, COL);
	saolei(show, ROW, COL);

	setarr(arr, ROW, COL);
	saolei(arr, ROW, COL);

	kaishi(arr, show, ROW, COL);
}


//游戏界面函数
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		UI();
		printf("请选择：");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			printf("进入游戏!\n");
			game();
			break;
		case 2:
			printf("退出游戏！\n");
			break;
		default:
			printf("选项错误！\n");
			break;
		}
	} while (a);
}


//主函数
int main()
{
	test();
	return 0;
}



