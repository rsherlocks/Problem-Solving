#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=11;i++)
    {
        for(j=11-i;1<=j;j--)
        {
            printf("  ");
        }
        for(k=1;k<=(i*2)-1;k++)
        {
            printf(" 8");
        }
        printf("\n");
    }
    return 0;
}
