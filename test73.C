//题目：反向输出一个链表
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
void trave_list(LNode *pH);

int main()
{
	LinkList Head = NULL;
	int n;

	printf("输入创建的节点数:\n");
	scanf("%d",&n);
	Head = CreateList(n);

	printf("刚创建的各个链表元素的值为:\n");
	print(Head);
	printf("\n");

	printf("反向输出链表为:\n");
	trave_list(Head);
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
		printf("输入第%d个元素的值:",i);
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

void trave_list(LNode *pH)
{
    LNode *p=pH->next;
    LNode *pBack;
    while(NULL!=p->next)
    {
        pBack=p->next;
        if(p==pH->next)
        {
            p->next=NULL;
        }
        else
        {
            p->next=pH->next;
        }
        pH->next=p;
        p=pBack;
    }
    p->next=pH->next;
    pH->next=p;
}
