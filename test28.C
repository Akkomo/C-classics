//题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
//ps:和猴子差不多
//结果差点把自己绕进去wtm...

#include <stdio.h>

int suishu(int);

int main()
{
	printf("第五个人%d岁\n",suishu(5));
	return 0;
}

int suishu(int i)
{
	int s;
	if (i <= 1)
		s = 10;
	else
		s = suishu(i - 1) + 2;
	return s;
}
