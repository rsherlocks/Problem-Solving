#include<stdio.h>
int main()
{
    int a[8]={2,3,5,6,2,5,1,2},i,check=0,key;
    scanf("%d",&key);
    for(i=0;i<8;i++)
    {
        if(a[i]==key)
        {
            check++;
        }
    }
    if(check>0)
        printf("%d",check);
    else
        printf("not found");
}
