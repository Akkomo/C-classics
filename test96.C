//题目：计算字符串中子串出现的次数
//ps:统计次数的时候不能只按一个字符
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int len1,len2,count = 0;
	char str1[100],str2[50];
	printf("输入两个字符串,第一个为母串,第二个为子串:\n");
	gets(str1);
	gets(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	for (int i = 0;i < len1;i++)
	{
		int j,k;
		for (j = 0,k = 0;j < len2;j++,k++)
		{
			if (str1[i + k] != str2[j])
				break;
		}
		if (j == len2)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
