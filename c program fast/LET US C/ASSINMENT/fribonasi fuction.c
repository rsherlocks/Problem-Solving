#include<stdio.h>
int main()
{
    int n,res,i;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {

      printf("%d\t%n",fac(i));
    }
    return 0;
}
    int fac(int n)
    {
       if(n==0)
       {
           return 0;
       }
       if(n==1)
       {
           return 1;

       }

       return fac(n-1)+fac(n-2);
    }

