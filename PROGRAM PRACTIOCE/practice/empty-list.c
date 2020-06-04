///insert in front::::
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int a;
    struct Node*next;

} node;

node *head = NULL;

void insert(int x)
{

    node*new_node=malloc(sizeof(node));
    new_node->a=x;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        new_node->next=head;
        head=new_node;
    }
}

void insert_end(int x)
{

    node*new_node=malloc(sizeof(node));
    new_node->a=x;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {


    }
}

void print()
{
    node*temp=head;
    printf("\n\nThe list is:  ");
    while(temp!=NULL)
    {
        printf("%d ",temp->a);
        temp=temp->next;
    }
}
int main()
{
    int i,n,x;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter value of x: ");
        scanf("%d",&x);
        //insert(x);
        insert_end(x);

    }
    print();
}


