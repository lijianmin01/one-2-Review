// #include<stdio.h>
// #include<string.h>

// char *cases[]={
// 	"Accepted"," Wrong Answer","Time Limit Exceeded",
// 	"Compile Error","Memory Limit Exceeded",
// 	"Output Limit Exceeded","Runtime Error",
// 	"Presentation Error" 
// };

// char *p2;//团队的名字
// int q_time=0;//每次提交数据的时间
// int q_question=0;//提交的是第一个数据
// int q_case=0;

// void look_case(char datas[100])
// {
// 	int i;
// 	for(i=0;i<8;i++)
// 	{
// 		if(strstr(datas,cases[i])!=NULL)
// 		{
// 			q_case=i;
// 			break;
// 		}
// 	}
// }

// typedef struct question{
// 	int k;
// 	int flag;
// 	int time;
// }Question;

// typedef struct team
// {
// 	int Rank;
// 	char name[44];
// 	int Solved;
// 	int Penalty;
// 	Question acm[90];
// }Team;

// void oneteam(Team a,int n)//将一个新的团队的数值初始化
// {
// 	a.Rank=0;
// 	a.Solved=0;
// 	a.Penalty=0;
// 	int i;
// 	for(i=0;i<n;i++)
// 	{
// 		a.acm[i].k=0;
// 		a.acm[i].time=0;
// 		a.acm[i].flag=0;
// 	}
// }
// void look_for_name(char datas[100])
// {
// 	int i;
// 	for(i=0;i<8;i++)
// 	{
// 		if(strstr(datas,cases[i])!=NULL)
// 		{
// 			//寻找这组数据中团队的名字
// 			int lenname=strlen(cases[i]);
// 			p2=strstr(datas,cases[i]);
// 			p2=&p2[lenname+1];
// 			break;
// 		}
// 	}
// }

// void look_time(char datas[100])
// {
// 	q_time=60*((datas[0]-'0')*10+datas[1]-'0')+((datas[3]-'0')*10+datas[4]-'0');
// }

// void look_question(char datas[100])
// {
// 	q_question=datas[6]-65;
// }

// Team small_team[99];
// main(void)
// {
// 	char zifu[]="ABCDEFGHIGKLMNOPQRSTUVWXYZ";
// 	int n;
// 	int i,j;
// 	scanf("%d",&n);
// 	getchar();
// 	char temp[100];
// 	gets(temp);
// 	look_case(temp);
// 	if(q_case==3)
// 	{
// 		return 0;
// 	}else
// 	{
// 		oneteam(small_team[0],n);
// 		look_for_name(temp);
// 		strcpy(small_team[0].name,p2);
// 		look_question(temp);
// 		small_team[0].acm[q_question].k++;
// 		look_time(temp);
// 		small_team[0].acm[q_question].time=q_time;
// 		if(q_case==0)
// 		{
// 			small_team[0].acm[q_question].flag=1;
// 			small_team[0].Solved++;
// 		}
// 	}
// 	int cnt=1;//记录参加团队的对数
// 	gets(temp);
// 	while(strcmp(temp,"GAME OVER!")!=0)
// 	{
// 		look_case(temp);
// 		if(q_case!=3)
// 		{
// 			int flag_name=0;//判断这这支队伍是否是第一次提交
// 			look_for_name(temp);
// 			for(i=0;i<cnt;i++)
// 			{
// 				if(strstr(temp,small_team[i].name)!=NULL)
// 				{
// 					flag_name=1;
// 					break;
// 				}
// 			}
// 			if(flag_name==0)
// 			{
// 				oneteam(small_team[cnt],n);
// 				look_for_name(temp);
// 				strcpy(small_team[cnt].name,p2);
// 				cnt++;
// 			}
// 			for(i=0;i<cnt;i++)
// 			{
// 				if(strstr(temp,small_team[i].name)!=NULL)
// 				{
// 					look_question(temp);
// 					if(small_team[i].acm[q_question].flag==1)
// 					{
// 						break;
// 					}
// 					small_team[i].acm[q_question].k++;
// 					look_time(temp);
// 					small_team[i].acm[q_question].time=q_time;
// 					if(q_case==0)
// 					{
// 						small_team[i].acm[q_question].flag=1;
// 						small_team[i].Solved++;
// 					}
// 				}
// 			}
// 		}
// 		gets(temp);
// 	}
// 	for(i=0;i<cnt;i++)
// 	{
// 		for(j=0;j<n;j++)
// 		{
// 			if(small_team[i].acm[j].flag==1)
// 			{
// 				small_team[i].Penalty+=small_team[i].acm[j].time;
// 			}
// 		}
// 	}
// 	//对所得数据进行排序
//     team temp9;//替代数据
//     for(i=0;i<cnt;i++)
//     {
//         for(j=0;j<cnt-i;j++)
//         {
//             if(small_team[j].Solved<small_team[j+1].Solved)
//             {
//                 temp9=small_team[j];
//                 small_team[j].Solved=small_team[j+1].Solved;
//                 small_team[j+1].Solved=temp9;   
//             }else if(small_team[j].Solved==small_team[j+1].Solved)
//             {
//                 if(small_team[j].Penalty>small_team[j].Penalty)
//                 {
//                     temp9=small_team[j];
//                     small_team[j]=small_team[j+1];
//                     small_team[j+1]=temp9;
//                 }
//             }
//         }
//     }
//     //进行rank排名
//     int cnt2=1;
//     for(i=0;i<cnt-1;i++)
//     {
//         if(small_team[i].Solved>small_team[i+1].Solved)
//         {
//             small_team[i].Rank=cnt2;
//             cnt9++;
//         }else if((small_team[i].Solved==small_team[i+1].Solved)&&(small_team[i].Penalty==small_team[i+1].Penalty))
//         {
//             small_team[i].Rank=cnt2;
//         }else
//         {
//             small_team[i].Rank=cnt2;
//             cnt2++;
//         }
//     }
//     everyream[cnt-1].Rank=cnt2;


// 	printf("Rank  Who                                          Solved  Penalty    ");
// 	for(i=0;i<n;i++)
// 	{
// 		printf("%c    ",zifu[i]);
// 	}
// 	printf("\n");
// 	for(i=0;i<cnt;i++)
// 	{
// 		printf("%-4d %-43s %-6d %-7d",small_team[i].Rank,small_team[i].name,small_team[i].Solved,small_team.Penalty);
// 		for(j=0;j<n;j++)
// 		{
// 			char zifu_p[]="";
// 			if(small_team[i].acm[j].flag==1)
// 			{
// 				zifu_p[0]='+';
// 				if(small_team[i].acm[j].k>1)
// 				{
// 					zifu_p[1]=(small_team[i].acm[j].k-1+'0');
// 				}
// 				printf("%-5s",zifu_p);
// 			}else
// 			{
// 				zifu_p[0]='-';
// 				if(small_team[i].acm[j].k>1)
// 				{
// 					zifu_p[1]=(small_team[i].acm[j].k+'0');
// 					printf("%-5s",zifu_p);
// 				}else
// 				{
// 					printf("     ");
// 				}	
// 			}
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }
#include<stdio.h>
#include<string.h>

char *cases[]={
	"Accepted"," Wrong Answer","Time Limit Exceeded",
	"Compile Error","Memory Limit Exceeded",
	"Output Limit Exceeded","Runtime Error",
	"Presentation Error" 
};

char *p2;//团队的名字
int q_time=0;//每次提交数据的时间
int q_question=0;//提交的是第一个数据
int q_case=0;

void look_case(char datas[100])
{
	int i;
	for(i=0;i<8;i++)
	{
		if(strstr(datas,cases[i])!=NULL)
		{
			q_case=i;
			break;
		}
	}
}

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
			break;
		}
	}
}

void look_time(char datas[100])
{
	q_time=60*((datas[0]-'0')*10+datas[1]-'0')+((datas[3]-'0')*10+datas[4]-'0');
}

void look_question(char datas[100])
{
	q_question=datas[6]-65;
}

Team small_team[99];
main(void)
{
	char zifu[]="ABCDEFGHIGKLMNOPQRSTUVWXYZ";
	int n;
	int i,j;
	scanf("%d",&n);
	getchar();
	char temp[100];
	gets(temp);
	look_case(temp);
	if(q_case==3)
	{
		return 0;
	}else
	{
		oneteam(small_team[0],n);
		look_for_name(temp);
		strcpy(small_team[0].name,p2);
		look_question(temp);
		small_team[0].acm[q_question].k++;
		look_time(temp);
		small_team[0].acm[q_question].time=q_time;
		if(q_case==0)
		{
			small_team[0].acm[q_question].flag=1;
			small_team[0].Solved++;
		}
	}
	int cnt=1;//记录参加团队的对数
	gets(temp);
	while(strcmp(temp,"GAME OVER!")!=0)
	{
		look_case(temp);
		if(q_case!=3)
		{
			int flag_name=0;//判断这这支队伍是否是第一次提交
			look_for_name(temp);
			for(i=0;i<cnt;i++)
			{
				if(strstr(temp,small_team[i].name)!=NULL)
				{
					flag_name=1;
					break;
				}
			}
			if(flag_name==0)
			{
				oneteam(small_team[cnt],n);
				look_for_name(temp);
				strcpy(small_team[cnt].name,p2);
				cnt++;
			}
			for(i=0;i<cnt;i++)
			{
				if(strstr(temp,small_team[i].name)!=NULL)
				{
					look_question(temp);
					if(small_team[i].acm[q_question].flag==1)
					{
						break;
					}
					small_team[i].acm[q_question].k++;
					look_time(temp);
					small_team[i].acm[q_question].time=q_time;
					if(q_case==0)
					{
						small_team[i].acm[q_question].flag=1;
						small_team[i].Solved++;
					}
				}
			}
		}
		gets(temp);
	}
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<n;j++)
		{
			if(small_team[i].acm[j].flag==1)
			{
				small_team[i].Penalty+=small_team[i].acm[j].time;
			}
		}
	}
	//对所得数据进行排序
    Team temp9;//替代数据
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt-i;j++)
        {
            if(small_team[j].Solved<small_team[j+1].Solved)
            {
                temp9=small_team[j];
                small_team[j]=small_team[j+1];
                small_team[j+1]=temp9;   
            }else if(small_team[j].Solved==small_team[j+1].Solved)
            {
                if(small_team[j].Penalty>small_team[j+1].Penalty)
                {
                    temp9=small_team[j];
                    small_team[j]=small_team[j+1];
                    small_team[j+1]=temp9;
                }
            }
        }
    }
    //进行rank排名
    int cnt2=1;
    for(i=0;i<cnt-1;i++)
    {
        if(small_team[i].Solved>small_team[i+1].Solved)
        {
            small_team[i].Rank=cnt2;
            cnt2++;
        }else if((small_team[i].Solved==small_team[i+1].Solved)&&(small_team[i].Penalty==small_team[i+1].Penalty))
        {
            small_team[i].Rank=cnt2;
        }else
        {
            small_team[i].Rank=cnt2;
            cnt2++;
        }
    }
    small_team[cnt-1].Rank=cnt2;


	printf("Rank  Who                                          Solved  Penalty    ");
	for(i=0;i<n;i++)
	{
		printf("%c    ",zifu[i]);
	}
	printf("\n");
	for(i=0;i<cnt;i++)
	{
		printf("%-4d %-43s %-6d %-7d",small_team[i].Rank,small_team[i].name,small_team[i].Solved,small_team.Penalty);
		for(j=0;j<n;j++)
		{
			char zifu_p[]="";
			if(small_team[i].acm[j].flag==1)
			{
				zifu_p[0]='+';
				if(small_team[i].acm[j].k>1)
				{
					zifu_p[1]=(small_team[i].acm[j].k-1+'0');
				}
				printf("%-5s",zifu_p);
			}else
			{
				zifu_p[0]='-';
				if(small_team[i].acm[j].k>1)
				{
					zifu_p[1]=(small_team[i].acm[j].k+'0');
					printf("%-5s",zifu_p);
				}else
				{
					printf("     ");
				}	
			}
		}
		printf("\n");
	}

	return 0;
}