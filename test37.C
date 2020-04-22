//题目：对10个数进行排序
//ps:来了来了,这里正好解决昨天的输入问题,使用冒泡排序
//md别人直接一个循环scanf....
//define不需要加;结尾

#include <stdio.h>
#define N 10

int main()
{
	int num[N],i,j,p;
	printf("请输入10个整数:\n");
	for (i = 0;i < N;i++)
		scanf("%d",&num[i]);
	for (j = 0;j < N - 1;j++)
	{
		for (i = 0;i < N - j - 1;i++)
		{
			if (num[i] > num[i + 1])
			{
				p = num[i];
				num[i]  = num[i + 1];
				num[i + 1] = p;
			}
		}
	}
	printf("从小到大排序为:\n");
	for (i = 0;i < N;i++)
	{
		printf("%d\40",num[i]);
	}
	printf("\n");
	return 0;
}
