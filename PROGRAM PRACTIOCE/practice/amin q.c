#include<stdio.h>
int main()
{
    int n,i,j,p,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        for(j=1;j<=p;j++)
        {
             for(l=1;l<=9;l++)
                {
                    printf("*");

                }
                if(j<p)
                {
                printf(" ");
                }
        }
        printf("\n");
                 for(j=1;j<=p;j++)
                {
                    printf("*       *");
                if(j<p)
                {

                    printf(" ");
                }


                }
                printf("\n");

                 for(j=1;j<=p;j++)
                {
                    printf("*       *");
                if(j<p)
                {

                    printf(" ");
                }


                }
                printf("\n");
                 for(j=1;j<=p;j++)
                 {
                for(l=1;l<=9;l++)
                {
                    printf("*");

                }
                if(j<p)
                {

                printf(" ");
                }
                 }
                 printf("\n");

        }
        return 0;
    }

