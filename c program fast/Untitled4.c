#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for(n==0;n<=7;n++)
    {
        if(n%2==0)
        {
            printf("even= %d\n",n);
        }
        else
        {
         printf("odd= %d\n", n);
        }
    }
    return 0;
}
