#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%3==0)
        {
            printf("%d is divisible by 3\n",n);
            if(n%7==0)
            {

            printf("%d is also divisible by 7\n",n);
            }
        }
        else
        {
            printf("%d is not divisible by 3\n",n);
        }
    }
    return 0;
}
