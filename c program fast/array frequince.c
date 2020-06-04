#include<stdio.h>
int main()
{
    int arr[5]={1,2,4,8,9},i,sum,even;
    for(i=0;i<=4;i++)
    if(even=(arr[i]%2==0))
     //printf("%d\n",arr[i]);
     sum +=arr[i];
    printf("%d",sum);




    return 0;
}
