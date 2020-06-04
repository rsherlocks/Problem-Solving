#include<stdio.h>
int main()
{
    char str1[15]="wer",str2[15];
    gets(str2);
    int i;
        for(i=0; str2[i]!=NULL; i++)
        {
            str1[i]=str2[i];
        }
        str1[i]=NULL;
        puts(str1);
}

