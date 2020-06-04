#include<stdio.h>
int main()
{
   long long int t,r,x,y,p,q,sum,i,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld %lld",&r,&x,&y,&p,&q);
        sum=(((x-p)*(x-p)) + ((y-q)*(y-q)));
        k=r*r;
    if(sum>=k)
    {
       printf("Case %d: NO\n",i);
    }
    else
        {
            printf("Case %d: YES\n",i);
        }
    }
    return 0;
}
