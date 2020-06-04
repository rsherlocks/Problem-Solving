#include<stdio.h>
int main()
{
//    int a=3,b=4,c=2,d=1;
//    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
      int a[12]={3,4,2,1},i;
//      a[0]=3;
//      a[1]=4;
//      a[2]=2;
//      a[3]=1;
      //printf("%d\n%d\n%d\n%d\n",a[0],a[1],a[2],a[3]);
      for(i=0;i<=3;i++)
      {
          printf("%d\n",a[i]);
      }
      //printf("\n\n\n\n\n");
      for(i=3;i>=0;i--)
      {
          printf("%d\n",a[i]);
      }

}
