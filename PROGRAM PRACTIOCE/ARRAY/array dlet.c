#include<stdio.h>
int main()
{
    int a[110]={5,7,8,9,3,4,} ,p, i,j,k;
    scanf("%d",&p);
    for(i=0;i<5;i++)
    {
        if(a[i]==p)
        {
            break;

        }
    }
    for(j=i;j<5;j++)
    {
        a[j]=a[j+1];
    }
    for(k=0;k<j;k++)
    {
        printf("%d\n",a[k]);
    }
    return 0;
}

