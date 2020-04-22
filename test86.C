//题目：两个字符串连接程序
//ps:直接用strcat
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100],str2[100];
	char * str;
	printf("输入两个字符串(用空格隔开):\n");
	scanf("%s%s",str1,str2);
	str = strcat(str1,str2);
	puts(str);
	return 0;
}
