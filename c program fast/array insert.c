#include <stdio.h>

int main()
{
    int i,n,a[100],p;

    printf("How many numbers: ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter any position: ");
    scanf("%d",&p);

    if(p<0||p>n)
        printf("Insert is impossible");
    else
    {
        for(i=n-1; i>=p; i--)
            a[i+1]=a[i];
        printf("Enter any number to insert: ");
        scanf("%d",&a[p]);
        n++;
    }

    for(i=0; i<n; i++)
        printf("%4d",a[i]);
}
