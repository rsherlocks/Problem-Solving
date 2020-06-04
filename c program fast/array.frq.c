#include<stdio.h>
int main()
{
    int i,max,arr[5]={5,8,6,9,7};
     for(i=0;i<5;i++)
      max=arr[0];
      {
             for(i=0;i<5;i++)
                //max=arr[0];
        {

             if(max<arr[i])
                max=arr[i];

        }
         //printf("%d\n",arr[max]);

         printf("%d",max);
      }


        //printf("%d",arr[i]);

        return 0;
}
