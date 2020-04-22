//题目：打印出杨辉三角形（要求打印出10行)
//将行首尾两项和中间分开,再找规律

#include <stdio.h>

int main()
{
	int num[10][10],i,j,k;
	for (i = 0;i < 10;i++)
	{
		num[i][0] = 1;
		num[i][i] = 1;
	}
	for (i = 2;i < 10;i++)
	{
		for (j = 1;j < i;j++)
			num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
	}
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <= i;j++)
			printf("%5d",num[i][j]);
		printf("\n");
	}
	return 0;
}
