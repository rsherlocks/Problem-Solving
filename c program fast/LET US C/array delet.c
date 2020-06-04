#include<stdio.h>
int main()
{
  int num[5]={5,1,2,7,8},del,i,j;
  printf("which element you want to delete from array?\n");
  scanf("%d",&del);
  for(i=0;i<5; i++){
    if(num[i]==del){
        break;
    }
  }
  for(j=i; j<4; j++){
    num[j] = num[j+1];
  }

  for(i=0; i<4; i++){
    printf("%d ",num[i]);
  }

}

