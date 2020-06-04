#include<stdio.h>
int main()
{
    int k,i;
    scanf("%d",&k);
    if(k<=1000&&k>=1)
    {
        printf("%d",k);
        for(i=k-1;i>=1;i--)
        {
            printf("\n%d",i);
        }
        printf("\n");
    }
    return 0;
}
