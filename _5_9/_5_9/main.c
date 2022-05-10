#include<stdio.h>
#include<stdlib.h>
#include<time.h>

clock_t t;
long sum;
int i;

int main()
{
	/*printf("普通查询：");
	putong(i);
	time1(i);*/
	printf("折半查询：");
	chazhao2();
	//time1();
	return 0;
}

long chazhao2()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//
	int a = 7;
	int left = 0;
	int shuzuyuansu = sizeof(arr) / sizeof(arr[0]);
	int right = shuzuyuansu - 1;
	int pingjunzhi;
	while (left <= right)
	{
		pingjunzhi = (left + right) / 2;
		if (arr[pingjunzhi] > a)
		{
			right = pingjunzhi - 1;
		}
		else if (arr[pingjunzhi] < a)
		{
			left = pingjunzhi + 1;
		}
		else
		{
			printf("你要查找的数组下标是：%d\n", pingjunzhi);
			break;
		}
	}
	if (left > right)
	{
		printf("没有找到你要找的元素！\n");
	}
	return pingjunzhi;
}


long putong()
{
	int f = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
	int b = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < b; i++)
	{
		if (f == arr[i])
		{
			printf("7的数组下标是：%d\n", i);
			break;
		}
	}
	if (i == b)
		printf("您输入的数字不存在我们的有序列表！\n");
	return i;
}


void time1()
{
	t = clock();
	sum = putong(i);
	t = clock() - t;
	printf("二分查找算法！如下->\n");
	//printf("%ld", sum);
	printf("用时：%lf秒\n", ((float)t) / CLOCKS_PER_SEC);
}


int RunNain()
{
	int year;
	int count;
	for (year = 0; year < 2022; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d\n", year);
			count++;
		}
	}
	return 0;
}


