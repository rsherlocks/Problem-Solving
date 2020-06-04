#include<stdio.h>
int main()
{
    int k,i,m,j;

    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        int check=0;

        scanf("%d",&m);

        for(j=0;j<=m;j++)
        {
            if(j%3==0)
            {
                check++;
            }
        }

        printf("Case %d: %d\n",i,check);
    }
    return 0;

}

