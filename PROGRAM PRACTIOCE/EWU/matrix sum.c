#include<stdio.h>
int main()
{
    int a,b,c,d,k,i;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
        d=a-b;
        printf("Case %d: %d%d\n",i,c,d);

    }
    return 0;

}
