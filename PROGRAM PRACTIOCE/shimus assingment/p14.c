#include<stdio.h>
int main()
{
    int p,m,i;

    scanf("%d",&p);

    for(i=1;i<=p;i++)
    {
        scanf("%d",&m);

        if(m%3==0)
        {
            printf("%d is divisible by 3\n",m);

            if(m%7==0)
            {

            printf("%d is also divisible by 7\n",m);

            }
        }
        else
        {
            printf("%d is not divisible by 3\n",m);
        }
    }
    return 0;
}

