
#include<stdio.h>
int main()
{
  int num[10] ={24,34,12,34,56,17},i,key,check=0,index;
  printf("which element you want to find in the array?\n");
  scanf("%d",&key);

  for(i=0; i<6; i++){
   if(num[i]==key)
    {
     check++;
     //index = i;
     if(check>0)
        {
    printf("found at index %d\n ",i);
  }
  else
    printf("not found\n");
   }

  }

}

