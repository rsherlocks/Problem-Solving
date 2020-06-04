#include <stdio.h>
int main()
{
    int i,j,m;

    scanf("%d",&m);

    for(j=1;j<=m;j++)
    {
     int f=0,k;

    scanf("%d",&k);

    for(i=2; i<=k/2; ++i)
    {
        if(k%i==0)
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

