#include<stdio.h>
int main()
{
    char str1[100]="we are one",str2[100]="we are student";
    int i,j,len1,len2;
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1>=len2)
    {
        for(i=0 ,j=0;str1[i]!='\0';i++,j++)
        {
            str1[i]=str2[j];
            printf("%c",str1[i]);
        }
    }
     else
    {
        for(i=0 ,j=0;str2[j]!='\0';i++,j++)
        {
            str2[j]==str1[i];
            printf("%c",str2[j]);
        }
    }

    return 0;


}
