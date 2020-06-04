#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[10][50];
    char str2[10][10];
    int i, j, n, result;

    printf("How many word do you want to enter\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s",str[i]);
    }
    for(j=1; j<=n; j++)
    {
        for(i=0; i<=n-j; i++)
        {
            result=strcmp(str[i],str[i+1]);
            if(result>0)
            {
                strcpy(str2,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],str2);
            }

        }
    }
    printf("\nWord in alphabetical order\n");
    for(i=0; i<=n; i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}

