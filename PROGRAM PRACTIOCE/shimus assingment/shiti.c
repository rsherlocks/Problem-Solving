#include<stdio.h>
#include<math.h>
int main()
{
int I,N,R,X,X1,Y,Y1;
double M;
scanf("%d",&N);
    for (I=0; I<N; I++)
    {
        scanf("%d%d%d%d%d",&R,&X,&Y,&X1,&Y1);
        M=sqrt((X1-X)*(X1-X)+(Y1-Y)*(Y1-Y));
        if(M<R)
            {printf("Case %d: YES\n",I+1);}
        else
            {printf("Case %d: NO\n",I+1);}


    }
    return 0;
}
