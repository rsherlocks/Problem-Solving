#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int a;
    struct Node *p;
}node;
node *h=NULL;
void insert()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    scanf("%d",&n->a);
    n->p=NULL;
    if(h==NULL)
    {
        h=n;

    }
    else
    {
        n->p=h;
        h=n;
    }
}
void print()
{
    node *t=h;
    while(t!=NULL)
    {
        printf("%d ",t->a);
        t=t->p;
    }
}
int main()
{
    int i,k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        insert();

    }
    print();
    return 0;
}

