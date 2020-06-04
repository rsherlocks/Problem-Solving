#include<stdio.h>
int main()
{
    int g;


    scanf("%d",&g);


    if(g>=-100&&g<=100)
    {
    if(g>=0)
    {
        printf("%d\n",g);
    }
    else
    {
        printf("%d\nNegative\n",g);
    }
    }



    return 0;
}


