#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}Node;

//往后面插入链表
void pushBacklist(Node **plist,int data)
{
	Node * pnew=(Node *)malloc(sizeof(Node));
	pnew->data=data;
	pnew->next=NULL;
	if(*plist)
	{
		Node *temp=*plist;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=pnew;
	}else
	{
		*plist=pnew;
	}
}

//打印链表
void printflist(Node *head)
{
	for(;head;head=head->next)
	{
		printf("%d->",head->data);
	}
	printf("\n");
}

//向前面插入数据
void pustfrontlist(Node **plist,int data)
{
	Node *pnew=(Node *)malloc(sizeof(Node));
	pnew->data=data;
	Node *temp=*plist;
	pnew->next=temp;
	*plist=pnew;
}
//释放链表
void freelist(Node **plist)
{
	Node *head=*plist;
	Node *temp;
	while(head)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	*plist=NULL;
}

int main(void)
{
	Node *head=NULL;
	pushBacklist(&head,1);
	pushBacklist(&head,2);
	pushBacklist(&head,3);
	pushBacklist(&head,4);
	printflist(head);
	pustfrontlist(&head,1);
	pustfrontlist(&head,2);
	pustfrontlist(&head,3);
	pustfrontlist(&head,4);
	printflist(head);
	freelist(&head);
	printflist(&head);
	return 0;
}