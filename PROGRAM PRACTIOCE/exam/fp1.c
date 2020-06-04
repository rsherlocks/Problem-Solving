#include<stdio.h>
//void jia(int,int);
int main()
{
    int p=3,f=4,m,n;
    m= jia(p,f);
    n= jia(p,f);
    printf("%d %d\n",m,n);
    return 0;
}
int jia(int q,int g)
{ int mm,nn;
    mm=q+g;
    nn=q*g;
    return(mm,nn);
}
