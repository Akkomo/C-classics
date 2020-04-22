//题目：判断一个素数能被几个9整除。
//程序分析：丫的！这题目的意思是判断一个素数能整除几个9组成的数吧？我就这么理解吧。素数是不 能被除1和自身之外的数整除的
//ps:上面是作者的分析不是我的分析
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	long int r = 9;
	printf("输入一个素数(相信你的输入,我就不检测了):\n");
	scanf("%d",&n);
	for (i = 1;;i++)
	{
		if (r % n == 0)
			break;
		else
			r = r * 10 + 9;
	}
	printf("%d能整除%d个9组成的数%ld\n",n,i,r);
	return 0;
}
