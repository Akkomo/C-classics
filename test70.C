//题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度
//和php一样都可以在判断的时候用赋值表达式,还挺方便

#include <stdio.h>

int main()
{
	int len = 0;
	char str;
	printf("输入一个字符串:\n");
	while ((str = getchar()) != '\n')
	{
		len ++;
	}
	printf("字符串长度为%d:\n",len);
	return 0;
}
