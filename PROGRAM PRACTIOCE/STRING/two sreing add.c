#include<stdio.h>
int main()
{
    char str1[100]="we are one",str2[100]=" we are student";
    int len1,len2,i,j,k;
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=len1,j=0;str2[j]!='\0';i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    for(k=0;k<i; k++)
    {
        printf("%c",str1[k]);
    }

    return 0;
}
