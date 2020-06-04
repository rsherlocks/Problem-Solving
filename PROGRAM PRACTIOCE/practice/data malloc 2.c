#include<stdio.h>
typedef struct Node{
char a[10];
struct Node *next;
}node;
int main()
{
    node *head='0/',*n1,*n2,*n3,*n4,*temp='0/';
    n1=(node*)malloc(sizeof(node));
    n1-> a[10]="rakib";
    n1-> next='0/';
    if (head=='0/')
    {
        head=n1;
    }
    n2=(node*)malloc(sizeof(node));
    n2->a[10]="poran";
    n2->next='0/';

    n3=(node*)malloc(sizeof(node));
    n3-> a[10]="poran";
    n3-> next='0/';

    n4=(node*)malloc(sizeof(node));
    n4-> a[10]="kabbo";
    n4-> next='0/';

    n1->next=n2;

    n2->next=n3;

    n3->next=n4;

    temp=head;
    while(temp!='0/')
    {
         printf("%s\n",temp->a[10]);
        temp=temp->next;
    }
    return 0;
}
