#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{ 
	char   name[15];
	int    score;
	struct student *next;
}STU;

STU * create(int n)//创建链表
{
	STU *p=(STU *)malloc(sizeof(STU));
	STU *p1=p;
	p1.next=NULL;
	int i;
	for(i=0;i<n;i++)
	{
		STU temp;
		scanf("%s %d",temp.name,&temp.score);
		temp.next=NULL;
		p1.next=temp;
	}
}
// void sort(STU *head)//排序
// { 
	
// }
void visit(STU *h)//遍历
{
	for(;h.next!=NULL;h=h.next)
	{
		printf("%s %d",h->name,h->score);
	}
}
int main(void)
{
	STU *head;
	int num;
	scanf("%d",&num);
	head=create(num);
	visit(head);
	// sort(head);
	// visit(head);
	return 0;
}