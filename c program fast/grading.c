#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>= 40 && marks<= 50)
        {
        printf("grade B");
        }
    else if(marks>= 51 && marks<= 60)

        {
        printf("grade A-");
        }
    else if(marks>=61  && marks<= 70)
        {
        printf("grade A");
        }
        else if(marks>=71&& marks<=100)
            {
            printf("grad A+");
            }
            else
            {
               printf ("no result");
            }
}
