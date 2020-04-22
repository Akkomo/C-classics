//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
//ps:例子使用了\40在输出那里,表示个空格
//这里的输入,空格和回车都是占一个位置的,所以只能输入一串 ,然后回车,注意别绕进去,反过来推
#include <stdio.h>

void dayin(int);

int main()
{
	int i = 5;
	printf("请输入5个字符:\n");
	dayin(i);
	printf("\n");
	return 0;
}

void dayin(int j)
{
	char m;
	if (j <= 1)
	{
		m = getchar();
		printf("相反顺序输出:\n");
		putchar(m);
	}
	else
	{
		m = getchar();
		dayin(j - 1);
		putchar(m);
	}
}
