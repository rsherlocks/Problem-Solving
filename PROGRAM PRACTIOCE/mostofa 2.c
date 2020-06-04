#include<stdio.h>
int check(int i)
{
     double k;
        if(i!=0)
        {
            k=i/7;
            return k;
        }
}
int main()
{
    int i;
    double p;
    for(i=-50;i<=50;i++)
    {
    p=check(i);
    printf("%.2lf\n",p);
    }
    return 0;
}
