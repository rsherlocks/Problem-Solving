#include<stdio.h>
int main()
{
    int arr1[]={1,4},arr2[]={3,4,5},i,j;
    for(i=2,j=0;j==NULL;i++,j++)
    {
        arr1[i]=arr2[j];
        i++;
        j++;
        arr2[3]=NULL;

    }
    printf("%d",arr1[i]);
}
