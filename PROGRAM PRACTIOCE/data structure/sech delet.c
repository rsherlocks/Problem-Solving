#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
    char name[10];
    int age;
    char number[12];
    char email[25];
    struct data *next;
} node;

node *head=NULL;

node *current=NULL;
node *previous=NULL;

void information()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("\nEnter name: ");
    scanf("%s",n->name);
    printf("\nEnter age: ");
    scanf("%d",&n->age);
    printf("\nEnter phone number: ");
    scanf("%s",n->number);
    printf("\nEnter phone email: ");
    scanf("%s",n->email);

    n->next=NULL;

    if(head==NULL)
    {
        head=n;
    }

    else
    {
        current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }

        current->next=n1;
    }

}

void print()
{
    printf("\n\nThe list is: ");
    current = head;
    while(current!=NULL)
    {
        printf("%s\n ",current->name);
        printf("%d\n ",current->age);
        printf("%s\n",current->number);
         printf("%s\n ",current->email);
        current=current->next;
    }

}

void search()
{
    char x[10];
    printf("\n\nEnter data you want to search: ");
    scanf("%s", x);
    current =head;
    while (current!=NULL && strcmp (current->name,x)!=0 && strcmp(current->number,x) !=0 && strcmp(current->email,x)!=0  )
    {
        previous=current;
        current=current->next;
    }
    if(strcmp (current->name,x)==0|| strcmp(current->number,x) ==0 ||strcmp(current->email,x)==0)

    {
        printf("found\n");
        printf("%s\n ",current->name);
        printf("%d\n ",current->age);
        printf("%s\n ",current->number);
        printf("%s\n",current->email);

        int c;
        printf("\nPress 1 to delete");
        printf("\nPress 2 to update");
        scanf("%d", &c);

        if(c==1)
        {
            delelte(previous,current);
        }
        else if(c==2)
        {
            //current=(malloc(sizeof(m)));
            printf("\nEnter updat name: ");
            scanf("%s",current->name);
            printf("\nEnter update age: ");
            scanf("%d",&current->age);
            printf("\nEnter update phone number: ");
            scanf("%s",current->number);
            printf("\nEnter update phone email: ");
            scanf("%s",current->email);
            //current->next=current;
        }


    }
    else
    {
        printf("not found");
    }

    update_print(current);


}
void  update_print(m*current)
{

    printf("\n\nThe list is: ");
    current = head;
    while(current!=NULL)
    {
        printf("%s\n ",current->name);
        printf("%d\n ",current->age);
        printf("%s\n",current->number);
         printf("%s\n ",current->email);
        current=current->next;
    }

}
void delelte(m *previous, m *current)
{

    if(current ==head)
    {

        head=head->next;
        free(current);

    }
    else
    {
        previous->next=current->next;
        free(current);
    }


}



int main()
{
    int n,i;

    printf("\nHow many nodes to create:  ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        information();
    }

    print();

    search();

    return 0;
}

