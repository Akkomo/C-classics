//题目：809*??=800*??+9*?? 其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果
//
#include <stdio.h>

int main()
{
	int m,n;
	n = 100 / 8;
	for (m = 10;m < n + 1;m++)
	{
		if (m * 9 < 100)
			continue;
		if (809 * m == 800 * m + 9 * m)
			printf("??代表的两位数是%d\n",m);
	}
	int sum;
	sum = 809 * (m - 1);
	printf("809 * %d = %d\n",(m - 1),sum);
	return 0;
}
