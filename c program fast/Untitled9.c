#include<stdio.h>
int main()
{
    int ar[5], arsize,i,max;
    //printf("please enter the array size of the array: ");
    scanf("%d",&arsize);
    //printf("\n %i", arsize);
    for(i=0;i<arsize;i++)
    scanf("%d",&ar[i]);
    max=ar[0];
    for(i=0;i<arsize;i++){
        if(max>ar[i])
            max=ar[i];
    }
    printf("%d+",max);
    return 0;
}
