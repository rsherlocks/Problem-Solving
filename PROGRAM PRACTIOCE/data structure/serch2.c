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
    gets(n->name);
    scanf("%d",&n->age);
    gets(n->phn);
    gets(n->email);
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
        puts(temp->name);
        printf("%d\n",temp->age);
        puts(temp->phn);
        puts(temp->email);
        temp=temp->next;

    }
}
}
void serch()
{
    int a=0;
   char name2[20];
   gets(name2);
   node *temp=head;
   while(temp!=NULL)
   {

   if(strcmp(temp->name,name2)==0||strcmp(temp->email,name2)==0||strcmp(temp->phn,name2)==0)
   {
       puts(temp->name);
       printf("\n");
        printf("%d\n",temp->age);
        puts(temp->phn);
         printf("\n");
        puts(temp->email);
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



