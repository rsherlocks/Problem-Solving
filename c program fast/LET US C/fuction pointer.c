#include<stdio.h>
int main()
{
    int a,*p;
    a=5;
    p=&a;
    *p=a;
    printf("%d\n%d\n%d\n",a,p,*p);

}
