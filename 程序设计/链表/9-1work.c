/*
1. 只能需要实现create、sort、visit这三个函数的函数体，其他不允许修改；

2. 严格按照输入输出效果；

3. 任务提交代码时需保证其符合行业代码规范，需进行必要的缩进及换行。（影响成绩评定）
*/
#include<stdio.h>
typedef struct student
{
   int      no;
   char    name[15];
   int      score;
}STU;

STU * create(int n)//创建数组
{
	STU *students=(STU *)malloc(sizeof(STU)*n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d",&students[i].no,students[i].name,&students[i].score);
	}
	return students;
}
void sort(STU *a,int n)//排序
{
	int i,j;
	STU temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].score>a[j+1].score)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void visit(STU*p,int len)//遍历
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("no:%d,name:%s,score:%d\n",p[i].no,p[i].name,p[i].score);
	}
}


int main(void)
{
	STU *arr;
	int num;
	scanf("%d",&num);
	arr=create(num);
	visit(arr,num);
	sort(arr,num);
	visit(arr,num);
	return 0;
}