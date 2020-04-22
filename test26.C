//题目：利用递归方法求0!到5!
#include <stdio.h>

int jiec(int);

int main()
{
	int i;
	for (i = 0;i < 6;i++)
	{
		printf("%d! = %d\n",i,jiec(i));
	}
	return 0;
}

int jiec(int j)
{
	int sum;
	if (j == 0)
		sum = 1;
	else
	{
		sum = j * jiec(j - 1);
	}
	return sum;
}
