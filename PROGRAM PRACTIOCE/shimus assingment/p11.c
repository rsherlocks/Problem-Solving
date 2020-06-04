#include<stdio.h>
int main()
{
    int m,i;

    scanf("%d",&m);

    if(m<=1000&&m>=1)
    {
        printf("%d",m);
        for(i=m-1;i>=1;i--)
        {
            printf("\n%d",i);
        }

        printf("\n");
    }
    return 0;
}


