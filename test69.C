//题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位
//ps:答案是用指针做,也可以不用指针,剔除报3的人,可以用赋0来实现,最后将不为0的人报出即可,妙啊!
#include <stdio.h>

int main()
{
	int arr[100],n;
	printf("输入人数n:\n");
	scanf("%d",&n);
	for (int i = 0;i < n;i++)
	{
		arr[i] = i + 1;
	}
	int count = 0,a,b = 0;
	while (count < n - 1)
	{
		if (arr[a] != 0)
		{
			b++;
		}
		if (b == 3)
		{
			count++;
			arr[a] = 0;
			b = 0;
		}
		a++;
		if (a == n)
			a = 0;
	}
	int last;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] != 0)
			last = arr[i];
	}
	printf("最后留下的是原来第%d号\n",last);
	return 0;
}
