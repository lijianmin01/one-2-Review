#include<stdio.h>
#include<string.h>

char *cases[]={
	"Accepted"," Wrong Answer","Time Limit Exceeded",
	"Compile Error","Memory Limit Exceeded",
	"Output Limit Exceeded","Runtime Error",
	"Presentation Error" 
};
char *p2;
typedef struct question{
	int k;
	int flag;
	int time;
}Question;
typedef struct team
{
	int Rank;
	char name[44];
	int Solved;
	int Penalty;
	Question acm[90];
}Team;
void oneteam(Team a,int n)//将一个新的团队的数值初始化
{
	a.Rank=0;
	a.Solved=0;
	a.Penalty=0;
	int i;
	for(i=0;i<n;i++)
	{
		a.acm[i].k=0;
		a.acm[i].time=0;
		a.acm[i].flag=0;
	}
}
void look_for_name(char datas[100])
{
	int i;
	for(i=0;i<8;i++)
	{
		if(strstr(datas,cases[i])!=NULL)
		{
			//寻找这组数据中团队的名字
			int lenname=strlen(cases[i]);
			p2=strstr(datas,cases[i]);
			p2=&p2[lenname+1];
			//puts(p1);
			break;
		}
	}
}

// void look_for_team(char datas[100])
// {
// 	int i;
// 	int flag=0;
// 	for(i=0;i<cnt;i++)
// 	{
// 		if(strstr(datas,))
// 	}
// }

int main(void)
{
	int n;//n记录题目数量
	scanf("%d",&n);
	Team teams[99];
	getchar();
	char datas[100];
	gets(datas);
	//puts(datas);
	int i,j;
	int cnt=0;//记录参加比赛的团队数目
	for(i=0;i<8;i++)
	{
		if(strstr(datas,cases[i])!=NULL)
		{
			//寻找这组数据中团队的名字
			int lenname=strlen(cases[i]);
			char *p1=strstr(datas,cases[i]);
			p1=&p1[lenname+1];
			//puts(p1);
			strcpy(teams[cnt].name,p1);
			oneteam(teams[cnt++],n);
			break;
		}
	}
	while(1)
	{
		if(strcmp(datas,"GAME OVER!")==0)
		{
			break;
		}
		gets(datas);

		int look_cases;
		for(i=0;i<8;i++)
		{
			if(strstr(temp,cases[i])!=NULL)
			{
				look_cases=i;
			}
		}
		if(look_cases==3)
		{
			break;
			//提交的数据没有通过编译，直接结束循环
		}
		
		char temp[100];
		strcpy(temp,datas);
		look_for_name(datas);
		//puts(p2);
		int cnt_copy=cnt;//防止程序混乱
		int flag1=0;//判断该团队是否是第一次提交
		for(i=0;i<cnt_copy;i++)
		{
			if(strcmp(p2,teams[i].name)==0)
			{
				flag1=1;
				break;
			}
		}
		if(flag1==0)
		{
			strcpy(teams[cnt].name,p2);
			oneteam(teams[cnt++],n);
		}

	}
	
	return 0;
}