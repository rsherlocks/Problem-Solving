#include<stdio.h>
int main()
{
    int t,n,r,i,d,r,j=0,k,a[1000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%d",&d);
       while(d>0)
       {
          r=d%2;
          a[j]=r;
          j++;
          d=d/2;
       }
       for(k=j;k>=0;k--)
       {
           printf("%d\n"a[k]);
       }
    }
}
