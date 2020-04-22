//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制
#include <stdio.h>
int main()
{
	int s = 0,n,a,t = 0;
	printf("请输入a的值和a的个数n(逗号隔开):\n");
	scanf("%d,%d",&a,&n);
	for (int i = 0;i < n;i++)
	{
		t += a;
		a = a * 10;
		s += t;
	}
	printf("s=%d\n",s);
	return 0;
}
