/*
输入某年某月某日，判断这一天是这一年的第几天？
程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
ps:闰年判段条件真是巧妙.用 || 和 && 结合,注意括号不然会warning
*/
#include <stdio.h>
int main()
{
	int year,month,day,x = 0;
	int ts[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入日期(格式xxxx-xx-xx):\n");
	scanf("%d-%d-%d",&year,&month,&day);

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		ts[1] = 29;
		{
			for (int i = 0;i < month - 1;i++)
			{
				x += ts[i];
			}
			x += day;
		}
	}
	else
	{
		for (int j = 0;j < month - 1;j++)
		{
			x += ts[j];
		}
		x += day;
	}
	printf("这是%d年的第%d天\n",year,x);
	return 0;
}
