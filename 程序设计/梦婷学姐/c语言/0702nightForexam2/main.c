#include <stdio.h>
#include <string.h>
void mystrcat(char *p1,char *p2)
{
    int len,j;
    for (len = 0; p1[len] ; ++len) ;
    for ( j = 0; p2[j]; ++j) {
        p1[len++]=p2[j];
    }
    p1[len]='\0';
}

int main() {
    char *language[]={"FORTRAN","CBASIC","PASCAL","JAVA","C"};
    printf("%d\n",language[2]);
    printf("%c\n",*language[2]);

//    //字符串函数的拼接
//    char s1[100]="abc";
//    char s2[100]="ABC";
//    mystrcat(s1,s2);
//    printf("%s",s1);

//    //字符串的拼接
//    char s1[50]="abc";
//    int j= sizeof(s1)/ sizeof(s1[0]);
//    char *p="ABC";
//    int i;
//    for (i = 0; *(p+i) ; ++i) {
//        s1[j+i]=p[i];
//    }
//    s1[j+i]='\0';
//    printf("%s\n",s1);

//    char *p1,*p2;
//    char str[50]="abc";
//    p1=str;
//    p2=str;
//    strcpy(str+1,strcat(p1,p2));
//    printf("%s\n",str);

//    char a[]="string";
//    char *p;
//    p=a;
//    printf("strlen(p)=%d   strlen(a)=%d\n",strlen(p),strlen(a));
//    printf("sizeof(p)=%d   sizeof(a)=%d", sizeof(p), sizeof(a));
//    char *s="\ta\017bc";
//    printf("%d %d\n", sizeof(s),strlen(s));
//    for (int i = 0; i <sizeof(s) ; ++i) {
//        printf("%d%c ",i,*(s+i));
//    }
//    char *s="\t\018bc";
//    int i;
//    for (int i = 0; *s!='\0' ; s++ ,++i) {
//        printf("%d ",i);
//    }

//    for (int i = 0; i <3 ; ++i) {
//        printf("%c ",65+i);
//    }
 ;
//    char str[]="ABC";
//    char *p=str;
//    printf("%d\n",*(p+3));//0
//    for (int i = 0; i < 3; ++i) {
//        printf("%d  ",*(p+i));
//        //65  66  67
//    }

//    char str[]="ABcde\0FGH";
//    char *p=str;
//    for (int i = 0; i<10 ; ++i)
//    {
//        printf("%d%c   ",i,*(p+i));
//    }
//    printf("\n%s\n",str);
//    printf("%d   %d\n",strlen(str), sizeof(str));
//    //0A   1B   2c   3d   4e   5    6F   7G   8H   9
//    //ABcde
//    //5   10

    // 5   8
//    char a[]="abcde";
//    char *s=a;
//    s+=2;
//    printf("%d\n",s);
//    printf("%d\n",&a[2]);
//    printf("%c\n",a[2]);

//    char a[]="abcdef123332";
//    char *p=a;
//    p+=3;
//    printf("%d\n",strlen(strcpy(p,"ABC")));//3

//    char a[3][10]={"Beijing","Shanghai","Tianjin"};
//    char *pa=a;
//    printf("1%s\n",a+1);
//    printf("2%s\n",*(a+1));
//    printf("3%s\n",*a+10);
//    printf("4%s\n",&a[1][0]);
//    printf("5%s\n",pa+10);
//    printf("6%s\n",*(pa+10));

//    if(-1)
//    {
//        printf("-1");
//    }else
//    {
//        printf("-12");
//    }
//    char b[10];
//    strcpy(b,"Hello");
//    puts(b);
//    char x[]="abcdefg";
//    char y[]={'a','b','c','d','e','f','g'};
//    printf("%d\n",strlen(x));
//    printf("%d\n",strlen(y));
//    printf("%d\n",strcmp(x,y));
//    int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//    int (*ptr)[3]=a;
//    int *p=a[0];
//    //表示a[1][2]
//    printf("%d\n",a[1][2]);
//    printf("%d\n",*(*(ptr+1)+2));
//    printf("%d\n",*(p+5));
    //printf("%d\n",*(ptr+1));
//    int a[2][3]={{1,2,3},{11,22,33}};
//    int (*p)[3]=a;
//    printf("%d\n",*(p[1]+1));
//    printf("%d\n",p[1]+2);
//    printf("%d\n",*(*(p+2)+1));
//    printf("%d\n",*(p+1)[0]);


//    char str[]="Hello";
//    char *p=str;
//    printf("%c %c**",*(p+4),*(p+5));
//    char s[10];
//    char *p=s;
//    p="12345";
//    //strcpy(p,"12345");
//    puts(p);
//    printf("%s",s);

//    int a[10];
//    int *p=a;
//    printf("%d %d\n",a[6],*(p+6));
//    printf("%p %p\n",&a[6],p+6);
//    int p[8]={11,12,13,14,15,16,17,18};
//    int i=0,j=0;
//    while(i++<7)
//    {
//        if(p[i]%2)
//            j+=p[i];
//    }
//    printf("%d\n",j);//45

//    if(0)
//    {
//        printf("666");
//    }else
//    {
//        printf("99999");
//    }
//    int a[3][3]={1,2,3,11,22,33,111,222,333};
//    int *p=&a[0][0];
//    int *p1;
//    p1=a[0];
//
//    for (int i = 0; i <3 ; ++i) {
//        for (int j = 0; j <3 ; ++j) {
//            printf("%3d   ",a[i][j]);
//            printf("%3d   ",*(p+i*3+j));
//            printf("%3d   \n",*(p1+i));
//        }
//    }


    /*
二维数组可以看成是指针的指针，b[][] = **b；
     比如b[3][4]; 它是一个3行4列的二维数组，也可以看成是二级指针，
     一级存放的是行指针，然后每个行指针里面其实又是指向了4个列元素。
     *(*(b+i)+j)，*(b+i)是先取行指针，然后+j偏移到所要的列，
     * 然后*取值就得到i行j列的数据了。 D项是*a才对
     * */
//    float a[6][2];
//    int i,j;
//    for (int i = 0; i <6 ; ++i) {
//        for (int j = 0; j <2 ; ++j) {
//            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
//        }
//    }


//    int b[][3]={{1,2,3},4,5,6};
//    int i,j;
//    for(i=0;i<6;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            printf("b[%d][%d]=%d\n",i,j,b[i][j]);
//        }
//    }
    /*
     * b[0][0]=1
        b[0][1]=2
        b[0][2]=3
        b[1][0]=4
        b[1][1]=5
        b[1][2]=6
        b[2][0]=0
        b[2][1]=2
        b[2][2]=12325760
        b[3][0]=0
        b[3][1]=4199367
        b[3][2]=0
        b[4][0]=0
        b[4][1]=0
        b[4][2]=51
        b[5][0]=0
        b[5][1]=4225392
        b[5][2]=0*/
    //int b1[2][6]={15,5,6,2};
    //int a[2][3]={{1,2},{1,2}};
//    int m[]={5,4,3,2,1};
//    int i=4;
//    printf("%d\n",m[m[i]]);
//    printf("%d\n",m[m[0]]);
//    int a[5]={1,2,3};
//    int i;
//    for(i=0;i<5;i++)
//    {
//        printf("a[%d]=%d\n",i,a[i]);
//    }
    return 0;
}