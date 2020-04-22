//输入两个正整数m和n，求其最大公约数和最小公倍数
/*
程序分析：
（1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；
（2）求最大公约数用辗转相除法（又名欧几里德算法）
1）证明：设c是a和b的最大公约数，记为c=gcd(a,b),a>=b,
令r=a mod b
设a=kc，b=jc，则k，j互素，否则c不是最大公约数
据上，r=a-mb=kc-mjc=(k-mj)c
可知r也是c的倍数，且k-mj与j互素，否则与前述k，j互素矛盾,
由此可知，b与r的最大公约数也是c，即gcd(a,b)=gcd(b,a mod b)，得证。
2）算法描述：
第一步：a ÷ b，令r为所得余数（0≤r 第二步：互换：置 a←b，b←r，并返回第一步。
——————————————————————————
以上只是一种方式,一共三种方法可以做,相减法,穷举法,辗转相除法

*/
#include <stdio.h>
int main()
{
	int m,n,max,min;
	printf("请输入两个正整数(用逗号隔开):\n");
	scanf("%d,%d",&m,&n);

	if (m == n)
	{
		max = n;
		min = m;
	}
	else if (m < n)
	{
		max = n % m;
		while (max != 0)
		{
			n = m;
			m = max;
			max = n % m;
		}
		min = n * m / max;
	}
	else
	{
		max = m % n;
		while (max != 0)
		{
			m = n;
			n = max;
			max = m % n;
		}
		min = n * m / max;
	}
	printf("最大公约数为%d,最小公倍数为%d\n",max,min);
	return 0;
}
