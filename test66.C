//题目：输入3个数a,b,c，按大小顺序输出(要求使用指针)
//三元表达式简洁一点

#include <stdio.h>

void swap(int *,int *);

int main()
{
	int a,b,c,*p1,*p2,*p3;
	printf("请输入3个整数a,b,c(用逗号隔开):\n");
	scanf("%d,%d,%d",&a,&b,&c);
	p1 = &a,p2 = &b,p3 = &c;
	if (a > b)
		swap(p1,p2);
	if (a > c)
		swap(p1,p3);
	if (b > c)
		swap(p2,p3);
	printf("从小到大排列为%d,%d,%d\n",a,b,c);
	return 0;
}

void swap(int * a1,int * a2)
{
	int tem;
	tem = * a1;
	* a1 = * a2;
	* a2 = tem;
}
