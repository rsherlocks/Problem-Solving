#include<stdio.h>
int main()
{
    int i;
    double k;
    for(i=-50;i<=50;i++)
    {
        if(i!=0)
        {
            k=i/7;
            printf("%.2lf\n",k);
        }
    }
    return 0;
}
