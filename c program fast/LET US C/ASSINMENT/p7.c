#include<stdio.h>
int main()
{
    int g;



    scanf("%d",&g);



    if(g>=1&&g<=100)
    {
        if(g%2==0)
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

