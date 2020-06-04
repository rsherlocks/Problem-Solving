#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d",rec(i));
    }
    return 0;
}
int rec(int i)
{
    if(i==0)
        return 0;
    if (i==1)
        return 1;
    return rec(i-1)+rec(i-2);
}
