#include <stdio.h>
int main()
{
    int i,j,p;
    scanf("%d",&p);

    for(j=1;j<=p;j++)
    {
     int f=0,n;
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }

    if (f==0)
        printf("Case %d: YES\n",j);
    else
        printf("Case %d: NO\n",j);
    }

    return 0;
}
