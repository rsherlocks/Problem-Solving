#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,c1,c2;
     char str1[55];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       int c1=0,c2=0;
       getchar();

        scanf("%s",&str1);

        for(j=0;str1[j]!='\0';j++)
        {
            if(str1[j]>='a' && str1[j]<='z'||str1[j]>='A' && str1[j]<='Z')
            {
                if(str1[j]=='A'||str1[j]=='E'||str1[j]=='I'||str1[j]=='O'||str1[j]=='U'||str1[j]=='a'||str1[j]=='e'||str1[j]=='i'||str1[j]=='o'||str1[j]=='u')
                {
                    c1++;
                }
            }
            else if(str1[j]>='1' && str1[j]<='9')
            {
                c2++;
            }
        }
         printf("Case %d: %d %d\n",i,c1,c2);
}
return 0;
}

