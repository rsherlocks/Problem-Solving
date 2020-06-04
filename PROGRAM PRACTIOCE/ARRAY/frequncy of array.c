#include<stdio.h>
int main()
{
    int a[10]={5,7,7,2,5,8,7,6,9,6},k1,k2,k3,check=0,i;
    scanf("%d",&k1);
    for(i=0;i<9;i++)
    {
        if(a[i]==k1)
        {
            check++;
        }
    }
    if(check>0)
    printf("%d\n",check);
    else
        {
            printf("not found\n");
        }

    return 0;
}

