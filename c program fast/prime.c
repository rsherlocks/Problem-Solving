#include<stdio.h>
int main()
{
    int i,n,t,check=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(i=2;i<=n/2;i++)
            if(n%i==0)
        {
            check++;
            break;
        }
        if(check==0)
        {
            printf("prime\n");
        }
        else
        {
            printf("not prime\n");
        }
    }

}
