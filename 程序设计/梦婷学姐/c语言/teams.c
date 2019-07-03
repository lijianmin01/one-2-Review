#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	return 0;
}


//  -strcmp();
/*
原型：int strcmp(const char *s1, const char *s2);
头文件：#include <string.h>

功能：用来比较两个字符串


参数：s1、s2为两个进行比较的字符串

返回值：若s1、s2字符串相等，则返回零；若s1大于s2，则返回大于零的数；
否则，则返回小于零的数。

说明：strcmp()函数是根据ACSII码的值来比较两个字符串的；
strcmp()函数首先将s1字符串的第一个字符值减去s2第一个字符，
若差值为零则继续比较下去；若差值不为零，则返回差值。
*/
// 
// #include<stdio.h>
// int mystrcmp(char *p1,char *p2)
// {
// 	while((*p1==*p2)&&*p1&&*p2)
// 	{
// 		p1++;
// 		p2++;
// 	}
// 	return *p1-*p2;
// }
// int main(int argc, char const *argv[])
// {
// 	char *a="abc";
// 	char *a1="abc";
// 	char *a2="abcd";
// 	char *a3="ab";
// 	char *a4="ABC";
// 	printf("%d\n",mystrcmp(a,a1));
// 	printf("%d\n",mystrcmp(a,a2));
// 	printf("%d\n",mystrcmp(a,a3));
// 	printf("%d\n",mystrcmp(a,a4));
// 	return 0;
// }



// //链表的后插与前叉
// //求链表的长度
// //后插
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// typedef struct student
// {
// 	char name[15];
// 	int score;
// 	struct student *next;
// }STU;
// //后插法
// void scanfqBack(STU **head,char name[15],int score)
// {
// 	STU *temp=(STU *)malloc(sizeof(STU));
// 	temp->score=score;
// 	strcpy(temp->name,name);
// 	temp->next=NULL;
// 	if(*head)
// 	{
// 		STU *p=*head;
// 		for(;p->next;p=p->next);
// 		p->next=temp;
// 	}else{
// 		*head=temp;
// 	}
// }
// //前插法
// void hscanfBack(STU **head,char name[15],int score)
// {
// 	STU *temp=(STU *)malloc(sizeof(STU));
// 	temp->score=score;
// 	strcpy(temp->name,name);
// 	temp->next=*head;
// 	*head=temp;
// }
// //打印链表
// void printflink(STU *head)
// {
// 	STU *p=head;
// 	for(;p;p=p->next)
// 	{
// 		printf("name:%s,score:%d\n",p->name,p->score);
// 	}
// }
// int forlen(STU *head)
// {
// 	int len=0;
// 	for(;head;head=head->next)
// 	{
// 		len++;
// 	}
// 	return len;
// }
// int main(void)
// {
// 	STU *head1=(STU *)malloc(sizeof(STU));
// 	STU *head2=(STU *)malloc(sizeof(STU));
// 	head1=NULL;
// 	head2=NULL;
// 	hscanfBack(&head1,"A",1);
// 	hscanfBack(&head1,"B",2);
// 	hscanfBack(&head1,"C",3);
// 	hscanfBack(&head1,"D",4);
// 	printflink(head1);
// 	printf("######\n");
// 	scanfqBack(&head1,"A",1);
// 	scanfqBack(&head1,"B",2);
// 	scanfqBack(&head1,"C",3);
// 	scanfqBack(&head1,"D",4);
// 	printflink(head1);
// 	printf("######\n");
// 	scanfqBack(&head2,"A",1);
// 	scanfqBack(&head2,"B",2);
// 	scanfqBack(&head2,"C",3);
// 	scanfqBack(&head2,"D",4);
// 	printflink(head2);
// 	printf("head1=%d\n",forlen(head1));
// 	printf("head2=%d\n",forlen(head2));
// 	return 0;
// }






// /*
// 任务09_2

//       根据已知的数据结构和main函数，完成create、sort
//       和visit函数，严格按照运行效果进行数据的输入和输出，
//       数据结构如下：
// */
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// typedef struct student
// { 
// 	char   name[15];
// 	int    score;
// 	struct student *next;
// }STU;

// // STU * create(int n)//创建链表
// // {
// // 	STU *head=malloc(sizeof(STU));
// // 	STU *pnew;
// // 	scanf("%s %d",pnew->name,&pnew->score);
// // 	pnew->next=NULL;
// // 	head=pnew;
// // 	for(i=1;i<n;i++)
// // 	{
// // 		STU *temp=head;
// // 		while(temp->next!=NULL)
// // 		{
// // 			temp=temp->next;
// // 		}
// // 		temp->next=pnew;
// // 		scanf("%s %d",pnew->name,&pnew->score);
// // 		pnew->next=NULL;
// // 	}
// // 	return head;
// // }

// STU * create(int n)//创建链表
// {
// 	STU *head=(STU *)malloc(sizeof(STU));
// 	int i;
// 	for(i=0;i<n;i++)
// 	{
// 		STU *temp=(STU *)malloc(sizeof(STU));
// 		scanf("%s",(temp->name));
// 		scanf("%d",&(temp->score));
// 		temp->next=NULL;
// 		if(head)
// 		{
// 			STU *h=head;
// 			for(;h->next;h=h->next);
// 			h->next=temp;
// 		}else
// 		{
// 			head=temp;
// 		}
// 	}
// 	return head;

// }
// void sort(STU *head)//排序
// { 
// 	STU *q,*p;
// 	q=head;
// 	int i,len=0;
// 	for(;q;q=q->next)
// 	{
// 		len++;
// 	}
// 	for(i=0;i<len-1;i++)
// 	{
// 		for(p=head;p;p=p->next)
// 		{
// 			if(p->score>p->next->score)
// 			{
// 				int tscore=p->score;
// 				p->score=p->next->score;
// 				p->next->score=tscore;
// 				char tname[15];
// 				strcpy(tname,p->name);
// 				strcpy(tname,p->next->name);
// 				strcpy(p->next->name,tname);
// 			}
// 		}
// 	}
// }
// void visit(STU *h)//遍历
// {
// 	if(h==NULL||h->next==NULL)
// 	{
// 		return ;
// 	}
// 	for(;h;h=h->next)
// 	{
// 		printf("name:%s,score:%d\n",h->name,h->score);
// 	}
// }
// int main(void)
// {
// 	STU *head;
// 	int num;
// 	scanf("%d",&num);
// 	head=create(num);
// 	visit(head);
// 	sort(head);
// 	visit(head);
// 	return 0;

// }
/*2、
n=0   f(1)=1;
n>0   f(n-1)+5;
*/
// #include<stdio.h>
// int digui(int n)
// {
// 	if(n==0)
// 	{
// 		return 1;
// 	}
// 	return digui(n-1)+5;
// }
// int main(int argc, char const *argv[])
// {
// 	printf("%d\n",digui(1));
// 	printf("%d\n",digui(2));
// 	printf("%d\n",digui(3));
// 	return 0;
// }




/*1、
	编写main函数，功能是接收键盘输入的整数，
	以0结束，统计输入的数据中数据中负数的个数
*/
// #include<stdio.h>
// int main(void)
// {
// 	int a;
// 	int cnt=0;
// 	scanf("%d",&a);
// 	while(a!=0)
// 	{
// 		if(a<0)
// 		{
// 			cnt++;
// 		}
// 		scanf("%d",&a);
// 	}
// 	printf("%d\n",cnt);
// 	return 0;
// }