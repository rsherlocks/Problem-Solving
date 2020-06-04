#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int age,salary;
    char name[10];
    struct Node *next;

}node;
node *head=NULL,*temp;
void createList()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    scanf("%s",n->name);
    scanf("%d",&n->age);
    scanf("%d",&n->salary);
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
if (head==NULL)
{
    printf("empty list");
}
else
{
    temp=head;


    while(temp!=NULL)
    {
        printf("%s\n",temp->name);
        printf("%d\n",temp->age);
        printf("%d\n",temp->salary);
        temp=temp->next;

    }
}
}
void serch()
{
   char name[20];
   scanf("%s", name);
   node *temp=head;
   while(temp!=NULL && strcmp(temp->name,name)!=0)
   {
       temp=temp->next;
   }

   if(strcmp(temp->name,name)==0)
   {
       printf("%s\n",temp->name);
       printf("%d\n",temp->age);
       printf("%d\n",temp->salary);

   }
   else
   {
       printf("not found");
   }
}
int main()
{
  int i,k;
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
      createList();
  }
  print();
  serch();
  //return 0;

}

