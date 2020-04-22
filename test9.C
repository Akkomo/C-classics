//要求输出国际象棋棋盘,系统不一样,编码就不做要求了
//国际象棋的黑白格分布规律:行+列是奇数/偶数,不只看行/列单独的奇偶性
#include <stdio.h>

int main()
{
	int i,j;
	for (i = 0;i < 8;i++)
	{
		for (j = 0;j < 8;j++)
		{
			if ((i + j) % 2 == 0)
				printf("%c%c",0xa8,0x80);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
