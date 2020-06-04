#include<stdio.h>
typedef struct Node{
int a;
struct Node *next;
}node;
int main()
{
    node *head='0/',*n1,*n2,*n3,*n4,*temp='0/',k;
    n1=(node*)malloc(sizeof(node));
    n1-> a=1;
    n1-> next='0/';
    if (head=='0/')
    {
        head=n1;
    }
    n2=(node*)malloc(sizeof(node));
    n2->a=2;
    n2->next='0/';

    n3=(node*)malloc(sizeof(node));
    n3-> a=3;
    n3-> next='0/';

    n4=(node*)malloc(sizeof(node));
    n4-> a=4;
    n4-> next='0/';

    n1->next=n2;

    n2->next=n3;

    n3->next=n4;

    scanf("%d",&k);
    temp=head;
    while(temp!='0/')
    {
        if(temp->a==k)
        {
         printf("%d\n",temp->a);
        }
        else
        {
        temp=temp->next;
        }
    }
    return 0;
}
