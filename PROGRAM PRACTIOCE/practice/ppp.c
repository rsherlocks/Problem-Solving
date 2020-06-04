#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,c1,c2;
     char str1[999];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       int c1=0,c2=0;
       getchar();

        scanf("%s",str1);

        for(j=0;str1[j]!='\0';j++)
        {
            if(str1[j]>='a' && str1[j]<='z')
            {

                    c1++;

            }
            else if(str1[j]>='A' && str1[j]<='Z')
            {
                c2++;
            }
        }
         printf("%d %d\n",c2,c1 );
}
return 0;
}
