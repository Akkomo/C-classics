//题目:创建一个链表
//ps:这就是实例的代码,还有一个有错误的版本,可以去看看错在哪里
//
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode * next;
}LNode,* LinkList;

LinkList CreateList(int n);
void print(LinkList h);

int main()
{
	LinkList Head = NULL;
	int n;

	printf("输入要创建的节点数量:\n");
	scanf("%d",&n);
	Head = CreateList(n);

	printf("刚创建的各个链表元素的值为:\n");
	print(Head);

	printf("\n\n");
	system("pause");
	return 0;
}

LinkList CreateList(int n)
{
	LinkList L,p,q;
	int i;
	L = (LNode *)malloc(sizeof(LNode));
	if (!L)
		return 0;
	L->next = NULL;
	q = L;
	for (i = 1;i <= n;i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("输入第%d个元素的值:\n",i);
		scanf("%d",&(p->data));
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return L;
}

void print(LinkList h)
{
	LinkList p = h->next;
	while (p != NULL)
	{
		printf("%d",p->data);
		p = p->next;
	}
}
