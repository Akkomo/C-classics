//题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"
//fgets()函数的使用,但我还是没看懂fgets()的第二个参数
#include <stdio.h>
#include <string.h>

int main()
{
	char c[1000];
	fgets(c,(sizeof c / sizeof c[0]),stdin);
	int d = strlen(c);
	char a[1000];
	int j = 0;
	for(int i = d - 1;i >= 0;i--)
	{
		a[i] = c[j];
		j++;
	}
	puts(a);
	return 0;
}
