#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"


//ͼ�ν���
void UI()
{
	printf("*******************\n");
	printf("***   1.play   ****\n");
	printf("***   2.exit   ****\n");
	printf("*******************\n");
}


//��Ϸʵ�ֺ���
void game()
{
	printf("��ӭ����ɨ��\n");

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


//��Ϸ���溯��
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		UI();
		printf("��ѡ��");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			printf("������Ϸ!\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (a);
}


//������
int main()
{
	test();
	return 0;
}



