#include<stdio.h>
int main()
{
    int i,t,h1,m1,s1,h2,m2,s2,p1,p2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int p1=0,p2=0;
    scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
    p1 =( (h1*3600) + (m1*60) + s1 );
    p2 =( (h2*3600) + (m2*60) + s2 );
    if(p1<p2)
    {
        printf("Player1\n");
    }
    else if(p2<p1)
    {
        printf("Player2\n");
    }
    else if(p1==p2)
    {
        printf("Tie\n");
    }
    }

    return 0;
}
