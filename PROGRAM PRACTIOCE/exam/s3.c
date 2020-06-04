#include<stdio.h>
int main()
{
    char str[50]="i am rakib";
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        c++;
    }
    printf("%d",c);
    return 0;
}
