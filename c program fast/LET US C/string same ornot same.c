#include<stdio.h>
int main()
{
    char str1[15],str2[20];
    int len1,len2,i,check=0;
    gets(str1);
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2)
    {
        printf("not same\n");
    }
    else
    {

    for(i=0;str1[i]!=NULL;i++)
    {
        if(str1[i]!=str2[i])
            check++;
    }
    if(check==0)
        printf("same\n");
    else
        printf("not same\n");

    }
    return 0;


}
