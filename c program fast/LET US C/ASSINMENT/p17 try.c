#include<stdio.h>

void rec()
{
 int i,j,k;
 for(i=1;i<=4;i++)
    {
    for(j=1;j<=9;j++)
    {
        if(i==1 || i==4 || j==1 || j==9){
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    //printf("\n");
 }
 return 0;
}
int main()
{
    int j,t,c,k=0;
    scanf("%d",&t);
    for(j=0;j<t;j++)
        {

    scanf("%d",&c);
    while(k<=c)
    {

    if(k<=100)
    {
    rec();
    }
    k++;
    //else if(c==2){
    //rec2();}
    //else if(c==3){
    //rec3();

    }
}
        }

