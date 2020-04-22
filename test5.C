/*输入三个整数x,y,z，请把这三个数由小到大输出
ps:这题可以很多种方法做,但还没学排序算法,之后可以回来看看
*/
#include <stdio.h>
int main()
{
	int x,y,z,t;
	printf("请输入三个整数(用逗号隔开):\n");
	scanf("%d,%d,%d",&x,&y,&z);
	if (x > y)
	{
		t = y;
		y = x;
		x = t;
	}
	if (x > z)
	{
		t = z;
		z = x;
		x = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排列为:%d,%d,%d\n",x,y,z);
}
