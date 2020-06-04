#include<stdio.h>
int main()
{
    float i,a,b,c,d,k;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    k=(a*2+b*3+c*4+d*1)/10;
    printf("%.1f",k);
    if(k>7)
    {
        printf("yes");
    }
}
