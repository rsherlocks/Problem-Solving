#include<stdio.h>
typedef struct std
{
    char word[10];
    struct std *next;
}node;
int main()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    scanf("%s",n->word);
    n->next=NULL;

    printf("%c\n",n->word[0]);
    if(n->word[0]=='a')
    {
         printf("%s",n->word);
    }
    return 0;

}
