//题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数
//ps:判断弄一半就行,如果要打印出和的形式,就弄个数组来存
#include <stdio.h>
int main()
{
	int i,j,sum;
	for (i = 1;i <= 1000;i++)
	{
		sum = 0;
		for (j = 1;j <= i/2;j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)
			printf("%d\n",sum);
	}
	return 0;
}
