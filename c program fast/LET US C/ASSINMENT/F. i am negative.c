#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    if(k>=-100&&k<=100)
    {
    if(k>=0)
    {
        printf("%d\n",k);
    }
    else
    {
        printf("%d\nNegative\n",k);
    }
    }
    return 0;
}

