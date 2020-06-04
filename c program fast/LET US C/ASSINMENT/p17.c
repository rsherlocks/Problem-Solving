#include<stdio.h>
void rec3()
{
    int i,j;
 for(i=1;i<=4;i++)
    {
    for(j=1;j<=29;j++)
    {
        if(i==1&& j!=10 &&j!=20 || i==4&& j!=10 && j!=20 || j==1 || j==9 || j==11 || j==19 || j==21 ||j==29)
            {
            printf("*");
        }
         else
        {
            printf(" ");
        }
    }
    printf("\n");

 }

}

void rec2()
{
    int i,j;
 for(i=1;i<=4;i++)
    {
    for(j=1;j<=19;j++)
    {
        if(i==1&& j!=10 || i==4&& j!=10 || j==1 || j==9 || j==11 || j==19)
            {
            printf("*");
        }
         else
        {
            printf(" ");
        }
    }
    printf("\n");

 }

}

void rec1()
{
 int i,j;
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
    printf("\n");
 }
}
int main()
{
    int j,t,c;
    scanf("%d",&t);
    for(j=0;j<t;j++){

    scanf("%d",&c);
    if(c==1){
    rec1();}
    else if(c==2){
    rec2();}
    else if(c==3)
        {
    rec3();
    }

    }
}

