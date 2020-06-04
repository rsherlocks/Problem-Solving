#include<stdio.h>
int main()
{
    int arr1[10],search,check=0,count=0,i,n;
    printf("how many num you can enter:");
    scanf("%d",&n);
    printf("enter now %d element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    prinf("which number do you want search? : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {

        if(search==arr1[i])
        {
            count++;
            check=1;
        }
    }
    if(check==1)
    {
       printf("%d is found",search);
    }
    else
    {

    }


    return 0;

}
