#include<stdio.h>
int main()
{
    int t,i,j,k,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
             for(l=1;l<=9;l++)
                {
                    printf("*");

                }
                if(j<k)
                {
                printf(" ");
                }
        }
        printf("\n");
                 for(j=1;j<=k;j++)
                {
                    printf("*       *");
                if(j<k)
                {

                    printf(" ");
                }


                }
                printf("\n");

                 for(j=1;j<=k;j++)
                {
                    printf("*       *");
                if(j<k)
                {

                    printf(" ");
                }


                }
                printf("\n");
                 for(j=1;j<=k;j++)
                 {
                for(l=1;l<=9;l++)
                {
                    printf("*");

                }
                if(j<k)
                {

                printf(" ");
                }
                 }
                 printf("\n");

        }
        return 0;
    }
