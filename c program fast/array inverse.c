#include<stdio.h>
int main()

{
    int arr[100],i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;

    }
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);

    return 0;

}
