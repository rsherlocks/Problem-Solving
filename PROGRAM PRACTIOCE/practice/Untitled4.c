#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int a;
struct Node*next;
}node;
int main()
{
    node*head=NULL,*n1,*n2,*n3,*temp;
    n1=(node*)malloc(sizeof(node));
    ///n1->a=5;
    printf("enter valu of n1:");
    scanf("%d",&n1->a);
    n1->next=NULL;
    if(head==NULL)
    {
        head=n1;
    }
    n2=(node*)malloc(sizeof(node));
    ///n2->a=6;
    printf("enter valu of n2:");
    scanf("%d",&n2->a);
    n2->next=NULL;
    n3=(node*)malloc(sizeof(node));
    ///n3->a=7;
    printf("enter valu of n3:");
    scanf("%d",&n3->a);
    n3->next=NULL;
    n1->next=n2;
    n2->next=n3;
    temp=head;
    while(temp!=NULL)
    {

        printf("%d ",temp->a);
        temp=temp->next;
    }
}


