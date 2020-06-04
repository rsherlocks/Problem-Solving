#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node *start;
void insert(int x);
void print();
int main()
{
    int n,i,x;
    start=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
        print();
    }
}



void insert(int x)
{ struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=NULL;
    if(start!=NULL)
    {
         temp->link=start;
        start=temp;
    }
    else
    {
         start=temp;

    }
}
void print()
{
   struct node *temp1=start;
    while(temp1!=NULL)
    {
        printf("%d",temp1->data);
        temp1=temp1->link;
    }
}
