//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同

#include <stdio.h>
int main()
{
	int m,n,p,r,s;
	printf("请输入一个五位数:\n");
	scanf("%d",&m);
	n = m / 10000;
	p = m % 10000 / 1000;
	r = m % 100 / 10;
	s = m % 10;
	if (n == s && p == r)
	{
		printf("%d是个回文数\n",m);
	}
	else
		printf("%d不是回文数\n",m);
	return 0;
}
