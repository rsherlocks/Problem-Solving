#include<stdio.h>
int main()
{
    char str1[100]="we are one",str2[100]="we are power of nation";
    int i,j,len1,len2,check=0;
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2)
    {
        printf("not same");
    }
    else{
            for(i=0;str1[i]!='\0';i++)
            {

            if(str1[i]!=str2[i])
            {
                check++;
            }
            }
            if(check==0)
            {

                printf("same\n");
            }
            else{
                printf("not same\n");
            }
    }
    return 0;

}
