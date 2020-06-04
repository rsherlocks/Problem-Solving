#include<stdio.h>
int main()
{
    int m,e,f;
    scanf("%d %d",&e,&f);
    if(e<=1000&&f<=1000&&e<=f)
    {
        printf("%d",e);
    for(m=1+e;m<=f; m++)
    {
        printf(" %d",m);

    }
    printf("\n");
    }
    return 0;
}

