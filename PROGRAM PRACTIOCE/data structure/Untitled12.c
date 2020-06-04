#include<stdio.h>
#include<stdlib.h>

typedef struct Human
{
    char name[20];
    int age;
    char phn[11];
    char email[15];
    struct Human *next;
}node;

node *head=NULL;

node *temp=NULL;
node *previous=NULL;

void information()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("\n\nEnter name: ");
    scanf("%s",n->name);
    printf("\n\nEnter age: ");
    scanf("%d",&n->age);
    printf("\n\nEnter phone number: ");
    scanf("%s",n->phn);
    printf("\n\nEnter email: ");
    scanf("%s",n->email);

    n->next=NULL;

    if(head==NULL)
    {
        head=n;
    }

    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=n;
    }

}

void print()
{
    printf("\n\n\nThe list is:\n");
    temp = head;
    while(temp!=NULL)
    {
        printf("%s\n ",temp->name);
        printf("%d\n ",temp->age);
        printf("%s\n",temp->phn);
         printf("%s\n ",temp->email);
        temp=temp->next;
    }

}

void search()
{
    char check[10];
    printf("\n\nEnter data you want to search: ");
    scanf("%s", check);
    temp =head;
    while (temp!=NULL && strcmp (temp->name,check)!=0 && strcmp(temp->phn,check) !=0 && strcmp(temp->email,check)!=0  )
    {
        previous=temp;
        temp=temp->next;
    }
    if(strcmp (temp->name,check)==0|| strcmp(temp->phn,check) ==0 ||strcmp(temp->email,check)==0)

    {
        printf("found\n");
        printf("%s\n ",temp->name);
        printf("%d\n ",temp->age);
        printf("%s\n ",temp->phn);
        printf("%s\n",temp->email);

        int p;
        printf("\nPress 1 to delete");
        printf("\nPress 2 to update\n");
        scanf("%d",&p);

        if(p==1)
        {
            delelte(previous,temp);
        }
        else if(p==2)
        {

            printf("\n\nEnter updat name: ");
            scanf("%s",temp->name);
            printf("\n\nEnter update age: ");
            scanf("%d",&temp->age);
            printf("\n\nEnter update phone number: ");
            scanf("%s",temp->phn);
            printf("\n\nEnter update email: ");
            scanf("%s",temp->email);
        }


    }
    else
    {
        printf("not found");
    }

    update_print(temp);


}
void  update_print(node*temp)
{

    printf("\n\nThe list is:\n");
    temp = head;
    while(temp!=NULL)
    {
        printf("%s\n ",temp->name);
        printf("%d\n ",temp->age);
        printf("%s\n",temp->phn);
         printf("%s\n ",temp->email);
        temp=temp->next;
    }

}
void delelte(node *previous, node *temp)
{

    if(temp ==head)
    {

        head=head->next;
        free(temp);

    }
    else
    {
        previous->next=temp->next;
        free(temp);
    }


}



int main()
{
    int k,i;

    printf("\nHow many information stored:  ");
    scanf("%d",&k);

    for(i=0; i<k; i++)
    {
        information();
    }

    print();

    search();

    return 0;
}



