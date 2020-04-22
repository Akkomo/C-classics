//题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
//ps:找最大值和最小值的时候一个正向一个反向,接受用户输入时,是可以用\n判断的,但是要定好结束条件
#include <stdio.h>

int main()
{
	int arr[100],m,n = 0,i,c = 0,tem;
	printf("输入一组数据(空格隔开):\n");
	while (c != '\n')
	{
		scanf("%d",&arr[n++]);
		c = getchar();
	}
	int max = 0,min = n - 1;
	for (m = 0;m < n;m++)
	{
		if (arr[max] < arr[m])
		{
			max = m;
		}
		if (max != 0)
		{
			tem = arr[0];
			arr[0] = arr[max];
			arr[max] = tem;
		}
	}
	for (i = n - 2;i >= 0;i--)
	{
		if (arr[i] < arr[min])
		{
			min = i;
		}
		if (min != n - 1)
		{
			tem = arr[n - 1];
			arr[n - 1] = arr[min];
			arr[min] = tem;
		}
	}
	printf("排列后的数组为:\n");
	for (i = 0;i < n;i++)
	{
		printf("%d\40\40",arr[i]);
	}
	printf("\n");
	return 0;
}
