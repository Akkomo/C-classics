//题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母
//本质不是删除,而是用一个新的数组把其余元素装进去,注意两个数组下标变量要分开控制
//不能用一个变量控制两个下标,当判断为假时会跳过一个下标,如果继续判断,新数组将有一个位置为‘\0’,会被认为数组到此截止,后面元素不显示
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100],newarr[100],m,n,p = 0;
	printf("请输入一个字符串:\n");
	fgets(arr,(sizeof arr / sizeof arr[0]),stdin);
	printf("输入要删除的字符:\n");
	scanf("%c",&n);
	for (m = 0;m < strlen(arr);m++)
	{
		if (arr[m] != n)
		{
			newarr[p] = arr[m];
			p++;
		}
	}
	printf("删除后的字符串:\n");
	for (m = 0;m < strlen(newarr);m++)
	{
		printf("%c\40",newarr[m]);
	}
	printf("\n");
	return 0;
}
