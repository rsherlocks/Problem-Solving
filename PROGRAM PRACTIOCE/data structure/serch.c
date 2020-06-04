#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int age;
    char name[10],phn[15],email[20];
    struct Node *next;

}node;
node *head=NULL,*temp;
void createList()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    scanf("%s",n->name);
    scanf("%d",&n->age);
    scanf(" %s",n->phn);
    scanf(" %s",n->email);
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
        printf("%s\n",temp->phn);
        printf("%s\n",temp->email);
        temp=temp->next;

    }
}
}
void serch()
{
    int a=0;
   char name2[20];
   scanf(" %s",name2);
   node *temp=head;
   while(temp!=NULL)
   {

   if(strcmp(temp->name,name2)==0||strcmp(temp->email,name2)==0||strcmp(temp->phn,name2)==0)
   {
       printf("%s\n",temp->name);
       printf("%d\n",temp->age);
       printf("%s\n",temp->phn);
       printf("%s\n",temp->email);
       a++;

   }
       temp=temp->next;



   }
   if(a==0)
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


