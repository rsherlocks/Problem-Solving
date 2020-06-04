#include<stdio.h>
int main()
{
    int i,a,b,c,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Case %d: %d\n",i,c);
    }
    return 0;
}
