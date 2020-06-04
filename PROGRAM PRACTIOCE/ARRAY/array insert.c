#include<stdio.h>
int main()
{
  int num[10]={10,5,23,7,8},insert,i,j,index;
  printf("which element you want to insert in array?\n");
  scanf("%d",&insert);
  printf("In which index?\n");
  scanf("%d",&index);

  for(i=4; i>=index   ;i--){
    num[i+1] = num[i];
  }
  num[index] = insert;

  for(i=0;i<6; i++){
    printf("%d ",num[i]);
  }
  return 0;

}


