#include<stdio.h>
int main()
{
    char ch[15];
    int i,v=0,c=0;
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {

    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
    {
        v++;

    }
    else
    {
        c++;
    }
    }
     printf("Vowel %d\n",v);
     printf("consonant %d\n",c);
}

