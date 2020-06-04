
#include<stdio.h>

int main(){

    double a,b,c;

    double pi=3.14159;

    scanf("%lf %lf %lf",&a,&b,&c);


    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",.5*a*c,pi*c*c,((a+b)/2)*c,b*b,a*b);

    return 0;


}
