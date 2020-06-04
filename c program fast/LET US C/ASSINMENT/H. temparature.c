#include<stdio.h>
int  main()
{
    int r;
    scanf("%d",&r);
    double c,a=98.4;
    c=((a-32)*5)/9;
    if(r>c)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}
