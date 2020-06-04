#include<stdio.h>
int main()
{
    int arr[5]={971,100,667,307,895},i,arrsize,max;
    scanf("%d",&arrsize);
    //printf("%d eleman into array:",arrsize);
    for(i=0;i<arrsize;i++)
        max=arr[0];
    {
        for(i=0;i<arrsize;i++)
        {
            if(max<arr[i])
                max=arr[i];

        }
        printf("[%d]",i);

    }
    printf("%d",max);


    return 0;
}
