//题目：一个偶数总能表示为两个素数之和
//1不是最小素数,得从2开始,Prime
//使用一个专门判断的函数方便调用
//ps:这里用&&判断函数返回值的方法确定结果真妙2333
#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main()
{
	int num,a = 2,b = 2,j;
	printf("输入一个大于0的偶数(最好大于等于4):\n");
	scanf("%d",&num);
	if (num % 2 != 0)//这里可以用do...while来写
		printf("不是偶数,重新输入!\n");
	else if (num < 4)
		printf("小于4,不能分解为两个素数之和\n");
	else
	{
		for (j = 2;j < num;j++)
		{
			if (isPrime(j) && isPrime(num - j))
			{
				a = j;
				b = num - j;
				break;
			}
		}
		printf("%d可以分解为%d和%d两个素数的和\n",num,a,b);
	}
	return 0;
}

int isPrime(int n)
{
	if (n == 1)
		return 0;
	for (int i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			return 0;
	return 1;
}
