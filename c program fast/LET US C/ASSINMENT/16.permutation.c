#include<stdio.h>
int main()
{
    int t,i,a,b,j,k;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       unsigned long long int p=1,q=1,f;

        scanf("%d %d",&a,&b);

        for(j=a;j>=1;j--)
        {
           p=p*j;
        }
        for(k=a-b;k>=1;k--)
        {
          q=q*k;
        }
        f=(p/q);
        printf("Case %d: %llu\n",i,f);

    }
    return 0;
}

