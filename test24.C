//题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和
//这里的输出可以写%m.nf来指定输出数据的有效位
#include <stdio.h>
int main()
{
	int i,t;
	float a = 2,b = 1,sum = 0;
	for (i = 1;i <= 20;i++)
	{
		sum += a / b;
		t = a;
		a += b;
		b = t;
	}
	printf("这个数列的前20项之和为%f\n",sum);
	return 0;
}
