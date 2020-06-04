#include<stdio.h>
int main()
{
    int t,p,i,j,k,l,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            for(m=1;m<=9;m++)
                if(m==1||m==9)
            {
             for(l=1;l<=4;l++)
                {
                    printf("*\n");

                }
            }
            else
            {
                printf("*\n\n\n\n*");
            }
             printf("\n");

        }
    }


    return 0;
}

