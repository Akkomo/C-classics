/*
题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
(1)如果这个质数恰等于（小于的时候，继续执行循环）n，则说明分解质因数的过程已经结束，另外 打印出即可。
(2)但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数n.重复执行第二步。
(3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步
ps:直接用判断条件,需每次将n重置,最后的数需要手动输出
*/
#include <stdio.h>

int main()
{
	int i,num,m;
	printf("请输入一个正整数:\n");
	scanf("%d",&num);
	printf("%d = ",num);

	for (i = 2;i < num;i++)
	{
		while (num % i == 0)
		{
			printf("%d",i);
			num = num / i;
			if (num != 1)
				printf("*");
		}
	}
	printf("%d\n",num);

/*	for (i = 2;i < num;i++)
	{
		if (num % i == 0)
		{
			printf("%d*",i);
			num /= i;
			i = 1;
		}
	}
		printf("%d\n",num);
*/	
	return 0;
}
