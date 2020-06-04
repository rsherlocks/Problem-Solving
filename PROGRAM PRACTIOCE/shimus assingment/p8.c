#include<stdio.h>
int  main()
{
    int a;
    scanf("%d",&a);

    double k,f=98.4;

    k=((f-32)*5)/9;

    if(a>k)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}


