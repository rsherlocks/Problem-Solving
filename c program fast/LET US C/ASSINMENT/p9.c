#include<stdio.h>
int main()
{
    int p;


    scanf("%d",&p);



    if(p%4==0 && p%100!=0 || p%400==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


