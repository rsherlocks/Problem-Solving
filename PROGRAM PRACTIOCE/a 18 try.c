#include<stdio.h>
int main()
{
    int i;
   float t,r,x,y,p,q,sum;
    scanf("%f",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f %f %f",&r,&x,&y,&p,&q);
        sum=(((x-p)*(x-p)) + ((y-q)*(y-q))-(r*r));
    if(sum>=0)
    {
       printf("Case %d: NO\n",i);
    }
    else
        {
            printf("Case %d: YES\n",i);
        }
    }
    return 0;
}


