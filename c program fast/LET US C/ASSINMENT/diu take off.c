#include<stdio.h>
int main()
{
    int d,a[100],i,k,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int r,j=0,found=0;
        scanf("%d",&d);
        while(d>0)
            {
                r=d%2;
                a[j]=r;
                j++;
                d=d/2;
            }
            for(k=j-1;k>=0;k--)
            {
                //printf("%d",a[k]);

                if(a[k]==1)
                {
                  found++;
                }
            }

            printf("Case %d: %d\n",i,found);
    }
    return 0;
}
