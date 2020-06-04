#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int l,i,c=0;
    gets(str1);
    l=strlen(str1);
    strcpy(str2,str1);
    strrev(str2);
    for(i=0;i<l;i++)
    {
        if(str2[i]==str2[i])
        {
            c++;
        }
    }
    if(c==l)
    {
        printf("palindrom\n");
    }
    else
    {
        printf("not palindrom\n");
    }

    return 0;
}
