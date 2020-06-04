#include<stdio.h>
int main()
{
   int a[100],i,j;
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=i-1;j>=0;j--)
   {
       printf("%d\n",a[j]);
   }
   return 0;
}
