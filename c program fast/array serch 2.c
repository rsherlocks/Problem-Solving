#include <stdio.h>

void main()
{
    int i,n,a[100],num,found=0;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter any number to search: ");
    scanf("%d",&num);

    for(i=0; i<n; i++)
    if(a[i]==num)
    {
        found=1;
        break;
    }

    if(found==1)
        printf("Found");
    else
        printf("Not found");
}

