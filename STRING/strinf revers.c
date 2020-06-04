#include<stdio.h>
int main()
{
    char str[100]="i am rakib";
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;

    }
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
