#include<stdio.h>
int main()
{
    char *str="rakib";
    char ch;
    for(ch=*str;(ch=*str)!='\0';*str++)
    {
        putch(ch);
    }
}
