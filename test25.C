//题目：求1+2!+3!+...+20!的和
//ps:注意int和long double,这里数据太大,必须用long型
#include <stdio.h>

int main()
{
	int i;
	long double j = 1,sum = 0;
	for (i = 1;i <= 20;i++)
	{
		j *= i;
		sum += j;
	}
	printf("和为%Lf\n",sum);
	return 0;
}
