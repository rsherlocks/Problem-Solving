#include<stdio.h>
int main()
{
    int n,i,j,check=0;
    int arr[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(arr[i]==arr[j])
        {
            printf("yes\n");

         check++;
        }
        else
        {
            printf("not\n");
        }

    }

    return 0;
}
