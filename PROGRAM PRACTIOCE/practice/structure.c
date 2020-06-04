#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,str[55],k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        int c1=0,c2=0;
        gets(str);
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]>='A'&&str[j]<='Z'||str[j]>='a'&&str[j]<='z')
            {
                if(str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U'||str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                {
                    c1++;
                }
            }
            else if(str[j]>='1'&&str[j]<='9')
            {
                c2++;
            }
             printf("%d\n",c1);
        printf("%d\n",c2);
        }


    }
}
