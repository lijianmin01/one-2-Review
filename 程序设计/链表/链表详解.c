// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node{
// 	int data;
// 	struct node *next;
// }Node;


// int main(int argc, char const *argv[])
// {
// 	//1、创建一个空链表
// 	//2、list:节点指针变量，表示指向链表首节点
// 	//3、list指向NULL，表示链表为空链表
// 	// int n,i;
// 	// scanf("%d",&n);
// 	// Node *head=(Node *)malloc(sizeof(Node));
// 	// head=NULL;
// 	// Node *pnew=head; 
// 	// head->next=NULL;
// 	// for(i=0;i<n;i++)
// 	// {
// 	// 	Node *temp=(Node *)malloc(sizeof(Node));
// 	// 	scanf("%d",&temp->data);
// 	// 	temp->next=NULL;
// 	// 	if(*head)
// 	// 	{
// 	// 		Node *body=head;
// 	// 		for(;body;body=body->next);
// 	// 		body->next=temp;
// 	// 	}else
// 	// 	{
// 	// 		head=temp;
// 	// 	}
// 	// }
// 	// for(;head!=NULL;)
// 	// {
// 	// 	printf("%d   # \n",head->data);
// 	// 	head=head->next;

// 	// }
// 	Node *head=NULL;
// 	int n,i;
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++)
// 	{
// 		Node *temp=(Node *)malloc(sizeof(Node));
// 		scanf("%d",&temp->data);
// 		temp->next=NULL;
// 		if(*head)
// 		{
// 			Node *p=head;
// 			while(*p)
// 			{
// 				p=p->next;
// 			}
// 			p->next=temp;
// 		}else
// 		{
// 			head=temp;
// 		}
// 	}
// 	for(;head;head=head->next)
// 	{
// 		printf("%d \n ",head->data);
// 	}
	
// 	return 0;
// }

//后插法
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node;


int main(int argc, char const *argv[])
{
	//1、创建一个空链表
	//2、list:节点指针变量，表示指向链表首节点
	//3、list指向NULL，表示链表为空链表
	// int n,i;
	// scanf("%d",&n);
	// Node *head=(Node *)malloc(sizeof(Node));
	// head=NULL;
	// Node *pnew=head; 
	// head->next=NULL;
	// for(i=0;i<n;i++)
	// {
	// 	Node *temp=(Node *)malloc(sizeof(Node));
	// 	scanf("%d",&temp->data);
	// 	temp->next=NULL;
	// 	if(*head)
	// 	{
	// 		Node *body=head;
	// 		for(;body;body=body->next);
	// 		body->next=temp;
	// 	}else
	// 	{
	// 		head=temp;
	// 	}
	// }
	// for(;head!=NULL;)
	// {
	// 	printf("%d   # \n",head->data);
	// 	head=head->next;

	// }
	Node *head=NULL;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		Node *temp=(Node *)malloc(sizeof(Node));
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head)
		{
			Node *p=head;
			while(p->next)
			{
				p=p->next;
			}
			p->next=temp;
		}else
		{
			head=temp;
		}
	}
	for(;head;head=head->next)
	{
		printf("%d\n ",head->data);
	}
	
	return 0;
}*/ 

//前插法
#include<stdio.h>
#include<stdlib.h>

typedef struct link{
	int data;
	struct link *next;
}Link;

int main(int argc, char const *argv[])
{
	int n,i;
	scanf("%d",&n);
	Link *head=NULL;
	for(i=0;i<n;i++)
	{
		Link *pnew=(Link *)malloc(sizeof(Link));
		scanf("%d",&pnew->data);
		pnew->next=head;
		head=pnew;
		
	}
	for(;head;head=head->next)
	{
		printf("%d\n",head->data);
	}
	return 0;
}