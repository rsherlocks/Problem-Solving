#include<stdio.h>
int main()

{
    int n[6]={80,85,88,86,90,100};
    int i,*k;
    k=n;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",*k);
        k++;
    }
    return 0;
}
