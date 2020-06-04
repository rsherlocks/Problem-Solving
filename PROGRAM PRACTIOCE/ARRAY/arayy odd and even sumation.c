#include<stdio.h>
int main()

{
    int a[10]={5,6,7,8,9,2,3,4},i,sum1=0,sum2=0;
    for(i=0;i<8;i++)
    {
        if(a[i]%2==0)
        {
            sum1+=a[i];
        }
        else
        {
            sum2+=a[i];
        }
    }
    printf("even =%d\n",sum1);
       printf("odd =%d\n",sum2);
       return 0;

}
