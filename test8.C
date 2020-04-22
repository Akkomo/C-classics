//输出9*9口诀
//感觉每种语言都有这个练习,php也写过这个
//ps:输出时的对齐方式,可以用%-3d的形式表示,左对齐,3位
#include <stdio.h>
int main()
{
	int i,j,rst;
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j <= i;j++)
		{
			rst = i * j;
			printf("%d * %d = %-3d",i,j,rst);//-3d表示左对齐,3位
		}
		printf("\n");
	}
	return 0;
}
