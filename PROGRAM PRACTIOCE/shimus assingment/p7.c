#include<stdio.h>
int main()
{
    int k;

    scanf("%d",&k);

    if(k>=1&&k<=100)
    {
        if(k%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }


    return 0;
}

