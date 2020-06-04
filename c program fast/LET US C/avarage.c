#include<stdio.h>
int main()
{
    int t,n,a,i,j,sum,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int sum=0;
        scanf("%d",&n);
        if(n>=1&&n<=100)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&m);
                if(m>=0&&m<=100)
                {
                    sum=sum+m;
                }
            }
             a=sum/n;
        printf("Case %d: %d\n",i,a);

        }


    }
    return 0;

}
