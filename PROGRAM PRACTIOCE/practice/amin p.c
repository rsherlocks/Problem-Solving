#include<stdio.h>
int main()
{
    int n,i,z,b,j,k;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       unsigned long long int p=1,q=1,f;

        scanf("%d %d",&z,&b);

        for(j=z;j>=1;j--)
        {
           p=p*j;
        }
        for(k=z-b;k>=1;k--)
        {
          q=q*k;
        }
        f=(p/q);
        printf("Case %d: %llu\n",i,f);

    }
    return 0;
}

