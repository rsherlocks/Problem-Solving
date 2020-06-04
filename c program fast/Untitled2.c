#include<stdio.h>

int main()
{
    int n=1;

    while(n<=20)
    {
        printf("%d\n", n);
        n++;

    }
    while(n%2)
    {
        printf("odd\n");
    }
    return 0;
}

