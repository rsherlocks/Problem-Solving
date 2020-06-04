#include<stdio.h>
int main()
{
    int n,res;
    scanf("%d",&n);
    res=fac(n);
    printf("%d",res);
    return 0;
}
    int fac(int n)
    {
       if(n<=1)
       {
           return 1;
       }
       return n*fac(n-1);
    }
