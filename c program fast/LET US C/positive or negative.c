#include<stdio.h>
int min()
{
    int k;
    scanf("%d",&k);
    if(k>=0)
    {
        printf("%d\n",k);
    }
    else
    {
        printf("%d\nNegative\n",k);
    }
    return 0;
}
