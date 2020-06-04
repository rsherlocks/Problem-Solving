#include<stdio.h>
int main()
{
    int k,a,b,s,i;

    scanf("%d",&k);

        for(i=1;i<=k;i++)
        {
            scanf("%d %d",&a,&b);

            if(a>=1&&b<=100000)
            {
                s=a+b;
            }

            printf("Case %d: %d\n",i,s);
        }
    return 0;
}

