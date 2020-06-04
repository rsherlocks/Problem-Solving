#include<stdio.h>
int main()
{
    int r,a[100000],i=0,m=0,d,j,p1;

    scanf("%d",&d);
    while(d>0)
    {
        r=d%2;
        a[i]=r;
        d=d/2;
        //printf("%d",a[i]);
        i++;

    }
    for(j=i-1;j>=0;j--)
    {
      printf("%d",a[j]);
    }
    return 0;
}
