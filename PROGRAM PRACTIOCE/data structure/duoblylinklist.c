#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node
{
    char name[30];
    int age;
    char mail[30];
    char phone_number[30];
    struct Node *next;

}node;
node *head=NULL;
node *temp;
void Insert()
{
    node *new_Node=malloc(sizeof(node));
    printf("Enter your name:\n");
    scanf("%s",new_Node->name);
    printf("Enter your age:\n");
    scanf("%d",&new_Node->age);
    printf("Enter your mail Id:");
    gets(new_Node->mail);
    printf("Enter your Phone Number:");
    gets(new_Node->phone_number);
    new_Node->next=NULL;
    head=new_Node;
    if(head==NULL)
    {
        head=new_Node;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_Node;
        //new_Node->next=temp;
        //new_Node=head;
    }
}
void search()
{
    char name[20];
    printf("Enter you search name:");
    gets(name);
    while(temp!=NULL&&strcmp(temp->name,name)!=0)
    {
        temp=temp->next;
    }
    if(strcmp(temp->name,name)==0)
    {
        print();
    }
}
void Delete(char name[20])
{
    node *prev;
    temp=head;
    if(strcmp(head->name,name)==0)
    {
        head=head->next;
        free(temp);
    }
    else
    {
        while(temp!=NULL &&strcmp(temp->name,name)!=0)
        {
            prev=temp;
            temp->next;
        }
        if(strcmp(temp->name,name)==0)
        {
            prev->next=temp->next;
            free(temp);
        }
    }
}
void print()
{
    temp=head;
    while(temp!=NULL)
    {
        puts(temp->name);
        printf("%d",temp->age);
        puts(temp->mail);
        puts(temp->phone_number);
        temp=temp->next;
    }
}
int main()
{
    int i,n;
    printf("create your list :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        Insert();
    }
    print();
    search();
    print();

}

