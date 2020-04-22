//题目：字符串排序
//ps:计算输入字符个数的问题,sizeof的用法并不是直接算个数的,而是使用的空间,其次64位系统,指针是8位,wtm,比较的时候看清楚
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char * str1,char * str2);

int main()
{
	char str1[20],str2[20],str3[20];
	printf("输入3个字符串(每个以回车结束):\n");
	fgets(str1,(sizeof(str1) / sizeof(str1[0])),stdin);
	fgets(str2,(sizeof(str2) / sizeof(str2[0])),stdin);
	fgets(str3,(sizeof(str3) / sizeof(str3[0])),stdin);
	if (strcmp(str1,str2) > 0)
		swap(str1,str2);
	if (strcmp(str2,str3) > 0)
		swap(str2,str3);
	if (strcmp(str1,str2) > 0)
		swap(str1,str2);
	printf("排序后:\n");
	printf("%s\n%s\n%s\n",str1,str2,str3);
	return 0;
}

void swap(char * str1,char * str2)
{
	char tem[20];
	strcpy(tem,str1);
	strcpy(str1,str2);
	strcpy(str2,tem);
}
