#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{ 
	char   name[15];
	int    score;
	struct student *next;
}Node;

//create、sort、visit和main函数如下：

Node * create(int n)//创建链表
{
	Node *head=NULL;
	//head=NULL;
	int i;
	for(i=0;i<n;i++)
	{
		Node *temp=(Node *)malloc(sizeof(Node));
		scanf("%s",temp->name);
		scanf("%d",&temp->score);
		temp->next=NULL;
		if(head)
		{
			Node *plist=head;
			while(plist->next)
			{
				plist=plist->next;
			}
			plist->next=temp;
		}else
		{
			head=temp;
		}
	}
	return head;
}
void sort(Node *head)//排序
{ 
	int i,j;
	Node *temp=head;
	int len=0;//记录长度
	if(head==NULL||head->next==NULL||head->next->next==NULL)
	{
		return ;
	}	
	while(temp->next)
	{
		temp=temp->next;
		len++;
	}
	printf("%d\n",len);
	for(i=0;i<len-1;i++)
	{
		for(;head->next;head=head->next)
		{
			if(head->score > head->next->score)
			{
				char name_t[15];
				int score_t=head->score;
				head->score=head->next->score;
				head->next->score=score_t;
				strcpy(name_t,head->name);
				strcpy(head->name,head->next->name);
				strcpy(head->next->name,name_t);
			}
		}
	}
}
void visit(Node *h)//遍历
{
	for(;h;h=h->next)
	{
		printf("name:%s,score:%d\n",h->name,h->score);
	}
}
int main(void)
{
	Node *head;
	int num;
	scanf("%d",&num);
	head=create(num);
	visit(head);
	printf("\n");
	sort(head);
	visit(head);
	return 0;
}
