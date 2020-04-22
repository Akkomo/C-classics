//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字

#include <stdio.h>

int main()
{
	int i,a,b,c,d,e;
	printf("请输入一个正整数(不超过5位):\n");
	scanf("%d",&i);
	a = i % 10;
	b = i % 100 / 10;
	c = i % 1000 / 100;
	d = i % 10000 / 1000;
	e = i / 10000;
	if (e)
		printf("%d是5位数,逆序打印:\n%d,%d,%d,%d,%d\n",i,a,b,c,d,e);
	else if (d)
		printf("%d是4位数,逆序打印:\n%d,%d,%d,%d\n",i,a,b,c,d);
	else if (c)
		printf("%d是3位数,逆序打印:\n%d,%d,%d\n",i,a,b,c);
	else if (b)
		printf("%d是2位数,逆序打印:\n%d,%d\n",i,a,b);
	else
		printf("%d是1位数,逆序打印:\n%d\n",i,a);
	return 0;
}
