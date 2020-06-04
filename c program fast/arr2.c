#include<stdio.h>
int main()
{
    int i,n,count =0;
    float arr[100];
    printf("Enter your total number of element(1 to 100: " );
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter number [%d]: ",i);
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i]){
                arr[0]=arr[i];
        count ++;

        }




    }

    printf("%d times largest element=%.2f",count,arr[0]);
    getch();
}
