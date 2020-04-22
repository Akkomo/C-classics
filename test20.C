//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include <stdio.h>
int main()
{
	float i,h = 100,sum = 0;
	for (i = 0;i < 10;i++)
	{
		sum += h;
		h = h/2;
	}
	sum = sum * 2 - 100;
	printf("共经过%f米.第10次反弹%f米高\n",sum,h);
	return 0;
}
