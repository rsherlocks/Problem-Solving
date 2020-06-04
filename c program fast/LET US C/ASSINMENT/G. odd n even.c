#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y>=1&&y<=100)
    {
        if(y%2==0)
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
