#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
	int a = 10;
	int b = 20;
	//��򽻻�
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/
	//��������
	/*a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d\nb = %d", a, b);*/
	//leetcode1();
	/*int arr[] = { 1,2,3,4,5,5,1,2,3,4,6};
	int i = 0;
	int sum = 0;
	int shuzugeshu = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < shuzugeshu; i++)
	{
		sum = sum ^ arr[i];
	}
	printf("��������%d", sum);*/
	/*test();
	return 0;*/
//}


//����һ�����飬ֻ��һ��Ԫ���ظ�һ�飬������Ԫ�ض����������ظ�����飬��ֻ��һ���Ԫ��
int leetcode1()
{
	int arr[] = { 1,2,3,4,5,5,4,3,2,1,6};
	int i = 0;
	int shuzugeishu = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < shuzugeishu; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 0; i < shuzugeishu; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("ֻ���������������%d\n", arr[i]);
			break;
		}
	}
	return 0;
}


