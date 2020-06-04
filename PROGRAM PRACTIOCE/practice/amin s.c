#include<stdio.h>
int main()
{
    int a[1002],d,i,j,m,k;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
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

