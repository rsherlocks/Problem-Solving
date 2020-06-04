#include<stdio.h>
int main()
{
    int a[100],n,i,check=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    for(i=0;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            check++;
            break;
        }



    if (check==0)
    {
        printf("prim\n");

    }
    else
    {
        printf("not prime\n");
    }
    }
    }
}
