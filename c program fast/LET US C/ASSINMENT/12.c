#include<stdio.h>
int main()
{
    int t,a,b,s,i;
    scanf("%d",&t);
    if(t>=1&&t<=100)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d",&a,&b);
            if(a>=1&&b<=100000)
            {
                s=a+b;
            }
            printf("Case %d: %d\n",i,s);
        }
    }
    return 0;
}
