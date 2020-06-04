#include <stdio.h>
#include <math.h>

int main()
{
    double r, m, n, x1, y1,x2,y2,h;
    int i, p;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%lf %lf %lf %lf %lf",&r, &m, &n, &x1, &y1);
        x2=(x1-m)*(x1-m);

        y2=(y1-n)*(y1-n);

        h=sqrt(x2+y2);

        if(h>=r)
            printf("Case %d: NO\n",i+1);
        else
            printf("Case %d: YES\n",i+1);

    }
    return 0;
}
