#include<stdio.h>
int main()
{
    int t,i,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int check=0;
        scanf("%d",&n);
        for(j=0;j<=n;j++)
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
