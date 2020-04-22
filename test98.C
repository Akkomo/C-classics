//题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束(97和98很像,不做97了)
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE * fp = NULL;//指向文件类型的指针(文件地址)
	char str[100];
	int len,i;
	printf("输入一个字符串:\n");
	gets(str);
	len = strlen(str);
	for (i = 0;i < len;i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	if ((fp = fopen("test000","w")) == NULL)
	{
		printf("error:cannot open file!\n");
		exit(0);
	}
	fprintf(fp,"%s",str);
	fclose(fp);

	system("pause");
	return 0;
}
