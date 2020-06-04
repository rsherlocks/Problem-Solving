#include<stdio.h>
int main()
{
    char str1[15], str2[20];
    int len1=0,len2=0,i,check=0;
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!=NULL;i++)
    {
        len1++;
    }
    printf("%d\n",len1);
    for(i=0;str2[i]!=NULL;i++)
    {
        len2++;
    }
    printf("%d\n",len2);
    if(len1!=len2)
        printf("not same");
    else
    {
        for(i=0;str1[i]!=NULL;i++)
            str1[i]!=str2;
                check++;
                if(check==0)
                printf("same");
                    else
                printf("not same");

    }
    return 0;
}

