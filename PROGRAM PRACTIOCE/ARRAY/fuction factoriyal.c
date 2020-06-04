#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //for(i=0;i<n;i++)
    //{
        printf("%d",fac(n));
    //}
    return 0;
}
int fac(int i)
{
    if(i>1)
    {
        return i*fac(i-1);
    }
}
