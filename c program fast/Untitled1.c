
#include<stdio.h>

int main()
{
    int a,b,c,d,e,aev;

    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    aev= (a+b+c+d+e)/5;

    if(aev>=60 && aev<=100)
    {
        printf("first division %d", aev);
    }
    else if(aev>=50 && aev<=59)
    {
        printf("second division %d", aev);
    }
    else if(aev>=40 && aev<=49)
    {
        printf("third division %d", aev);
    }
    else if(aev>40)
    {
        printf("fail %d", aev);
    }

    else
    {
        printf("inviollad");
    }
    return 0;
}
