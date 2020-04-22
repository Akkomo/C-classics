//题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)
//ps:注意浮点数运算的规则以及分母取值,不然会报inf,这里用了3个函数,其中一个是指针函数,将两个函数的地址传给该函数,来控制使用对应的函数
#include <stdio.h>
#include <stdlib.h>

double evenumber(int n);
double oddnumber(int n);

int main()
{
	int n;
	double r;
	double (* pchoose)(int);
	printf("输入一个数:\n");
	scanf("%d",&n);
	if (n % 2 == 0)
		pchoose = evenumber;
	else
		pchoose = oddnumber;
	r = (* pchoose)(n);
	printf("%lf\n",r);
	return 0;
}

double evenumber(int n)
{
	double a = 0,b = 0;
	for (int i = 2;i <= n;i += 2)
	{
		a = (double)1/i;
		b += a;
	}
	return b;
}

double oddnumber(int n)
{
	double a = 0,b = 0;
	for (int j = 2;j <= n;j +=2)
	{
		a = (double)1/j;
		b += a;
	}
	return b;
}
