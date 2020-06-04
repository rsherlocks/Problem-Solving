
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
    char name[10];
    int age;
    char number[12];
    struct data *next;
} m;

m *head=NULL;

m *current=NULL;
m *previous=NULL;

void insert()
{
    m *n1=malloc(sizeof(m));
    printf("\nEnter name: ");
    scanf("%s",n1->name);
    printf("\nEnter age: ");
    scanf("%d",&n1->age);
    printf("\nEnter phone number: ");
    scanf("%s",n1->number);
    n1->next=NULL;

    if(head==NULL)
    {
        head=n1;
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
        printf("%s ",current->name);
        printf("%d ",current->age);
        printf("%d ",current->number);
        current=current->next;
    }

}

void search()
{
    char x[10];
    printf("\n\nEnter data you want to search: ");
    scanf("%s", x);
    current =head;
    while (current!=NULL && strcmp (current->name,x)!=0 && strcmp(current->number,x) !=0 )
    {
        previous=current;
        current=current->next;
    }
    if(strcmp (current->name,x)==0|| strcmp(current->number,x) ==0 )

    {
        printf("found");
        printf("%s ",current->name);
        printf("%d ",current->age);
        printf("%d ",current->number);

        int c;
        printf("\nPress 1 to delete: ");
        scanf("%d", &c);

        if(c==1)
        {
            delelte(previous,current);
        }


    }
    else
    {
        printf("not found");
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
if(current->name==x)

{
    previous->next=current->next;
    free(current);
}
{
    int n,i;

    printf("\nHow many nodes to create:  ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        insert();
    }

    print();

    search();

    print();
}


