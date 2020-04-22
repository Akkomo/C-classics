//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中
//默认从小到大排列
//双重替换,不加退出条件后面就全给替换了
//逆序的话程序简介很多!
#include <stdio.h>

int main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100};
	int num,i,j,tem,tem2;
	printf("原始数组:\n");
	for (i = 0;i < 10;i++)
	{
		printf("%d\40",a[i]);
	}
	printf("\n");
	printf("输入一个新的正整数参加排序:\n");
	scanf("%d",&num);
	if (num >= a[9])
	{
		a[10] = num;
	}
	else
	{
		for (j = 0;j < 10;j++)
		{
			if (num <= a[j])
			{
				tem = a[j];
				a[j] = num;
				for (i = j + 1;i < 11;i++)
				{
					tem2 = a[i];
					a[i] = tem;
					tem = tem2;
				}
				break;
			}
		}
	}
	printf("替换后的数组:\n");
	for (i = 0;i < 11;i++)
	{
		printf("%d\40",a[i]);
	}
	printf("\n");
	return 0;
}
