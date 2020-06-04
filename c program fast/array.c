#include<stdio.h>
int main()
{
    int grade[5],i,sum=0;
    float avg;
    for(i=0;i<5;i++)
    {
        printf("\n enter grade[%d]: ",i);
        scanf("%d",&grade[i]);
        sum+=grade[i];
    }
    avg=sum/5;
    printf("\n\n\n\n average is:%f",avg);
    getch();
    return 0;
}
