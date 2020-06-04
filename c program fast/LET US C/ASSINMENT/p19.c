#include<stdio.h>
int main()
{
    int a[1002],t,i,j,n,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=j-1;k>=0;k--)
        {
            printf("%d",a[k]);
            if(k>0)
            {
                printf(" ");
            }

        }
         printf("\n");

    }
    return 0;
}
