//题目：有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数
//
#include <stdio.h>
#include <stdlib.h>

void move(int array[],int n,int offset);

int main()
{
	int x,i,arr[50],offset;
	printf("输入数组的大小:\n");
	scanf("%d",&x);
	printf("输入数组元素:\n");
	for (i = 0;i < x;i++)
		scanf("%d",&arr[i]);
	printf("输入偏移量m:\n");
	scanf("%d",&offset);
	printf("原始数组:\n");
	for (i = 0;i < x;i++)
		printf("%5d",arr[i]);
	printf("\n");
	move(arr,x,offset);
	printf("输出后移后的数组为:\n");
    	for (i=0;i < x;i++)
        	printf("%5d",arr[i]);
	printf("\n");
    	return 0;
}

void move(int array[],int n,int offset)
{
	int * p,* arr_end;
	arr_end = array + n;//数组最后一位的下一位
	int last;
	while(offset)
	{
		last = *(arr_end - 1);
		for (p = arr_end - 1;p != array;--p)//依次向右滚动
			* p = * (p - 1);
		* array = last;//然后吧最后一位的值赋给第一位
		--offset;
	}
}
