#include<stdio.h>
int  main()
{
    int e;
    scanf("%d",&e);
    double k,p=98.4;
    k=((p-32)*5)/9;
    if(e>k)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}

