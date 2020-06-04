#include<stdio.h>
int main()
{
    int r,a[100000],i=0,m=0,d,j,p1;
   double da,k,p2;
    scanf("%d",&d);
    scanf("%lf",&da);
    while(d>0)
    {
        r=d%2;
        a[i]=r;
        d=d/2;
        //printf("%d",a[i]);
        i++;

    }
    for(j=i-1;j>=0;j--)
    {
      printf("%d",a[j]);
    }
    printf(".");

    while(da==0)
    {
        p2=da*2;
        if(p2>=1)
        {
         da=p2-1;

        a[m]=da;

        m++;

        }
        else
        {
            da=1-p2;

        a[m]=da;

        m++;

        }
        printf("%d\n",a[m]);


    }

    return 0;

}
