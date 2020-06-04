#include<stdio.h>
int main()
{
    char str[50]="i am rakib";
    int k,i;
    k=strlen(str);
    for(i=k-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
