#include<stdio.h>
int main()
 {
     char str[100]="we are one";
     int i,len=0;
     for(i=0;str[i]!='\0';i++)
     {
         len++;
     }
     printf("%d\n",len);
     return 0;

 }
