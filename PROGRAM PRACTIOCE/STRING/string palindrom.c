#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char s1[100],s2[100];
    int i,len,check=0;
    gets(s1);
    len=strlen(s1);
    strcpy(s2,s1);
    strrev(s2);
    for(i=0;i<len;i++)
    {
        if(s1[i]==s2[i])
        {
            check++;
        }
    }
    if(check==len)
    {
        printf("palindrom");
    }
    else{
        printf("not palindrom");
    }
    return 0;
}
