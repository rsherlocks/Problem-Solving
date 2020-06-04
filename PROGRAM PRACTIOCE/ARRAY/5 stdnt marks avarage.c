#include<stdio.h>
int main()
{
    int a[1000],i,sum=0,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    j=sum/5;
    printf("%d\n",j);
    return 0;
}
