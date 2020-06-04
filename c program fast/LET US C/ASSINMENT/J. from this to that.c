#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d %d",&x,&y);
    if(x<=1000&&y<=1000&&x<=y)
    {
        printf("%d",x);
    for(n=1+x;n<=y; n++)
    {
        printf(" %d",n);

    }
    printf("\n");
    }
    return 0;
}
