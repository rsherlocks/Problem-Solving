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
            for(m=1;m<=4;m++)
                if(m==1||m==4)
            {
             for(l=1;l<=9;l++)
                {
                    printf("*");

                }
            }
            else
            {
                printf("\n*       *\n");
            }
             printf("\n");

        }
    }


    return 0;
}

