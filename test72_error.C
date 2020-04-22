//题目：创建一个链表(md,还没学链表,超纲了啊)
//ps:特么这段代码是错的,找不到A *,我还跟着看了几遍...重新找一个学,之后再来看这段错在哪里
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LNode
{
	int data;
	struct LNode * next;
}A;

A * creat_node(int data);//创建节点
void print_list(A * pH);//打印链表
void tail_insert(A * pH,A * new);//尾插法

int main()
{
	int i,n,j;
	A * head = creat_node(0);
	printf("输入想要创建的节点个数:\n");
	scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		printf("第%d个节点的数据:\n",i);
		scanf("%d",&j);
		tail_insert(head,creat_node(j));
	}
	print_list(head);
	return 0;
}

A * creat_node(int data)
{
	A * p = malloc(sizeof(A));
	if (NULL == p)
	{
		printf("malloc error!\n");
		return NULL;
	}
	memset(p,0,sizeof(A));//为新申请的内存进行初始化工作
	p->data = data;
	p->next = NULL;
	return p;
}

void tail_insert(A * pH,A * new)
{
	A * p = pH;
	while (NULL != p->next)
	{
		p = p->next;
	}
	p->next = new;
}

void print_list(A *pH)
{
	A * p = pH;
	printf("***************\n");
	printf("刚创建的链表:\n");
	while (NULL != p->next)
	{
		p = p->next;
		printf("data = %d\n",p->data);
	}
}
