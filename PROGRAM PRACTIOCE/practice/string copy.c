#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,l1,l2;
    gets(str1);
    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1>l2)
    {
        for(i=0;str1[i]!='\0';i++)
        {
            str1[i]=str2[i];
        }
    }
    else
    {
        for(i=0;str2[i]!='\0';i++)
        {
            str1[i]=str2[i];
        }
    }
    //strcpy(str1,str2);

    puts(str1);

}
