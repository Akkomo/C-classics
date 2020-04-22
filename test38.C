//题目：求一个3*3矩阵对角线元素之和
#include <stdio.h>
#define N 3

int main()
{
	int num[N][N],i,j,sum = 0;
	printf("请输入一个%d*%d的矩阵\n",N,N);
	for (i = 0;i < N;i++)
	{
		for (j = 0;j < N;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for (i = 0;i < N;i++)
	{
		sum += num[i][i];
	}
	printf("矩阵对角线元素之和为%d\n",sum);
	return 0;
}
