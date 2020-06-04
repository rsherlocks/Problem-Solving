#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int age;
    char name[10],email[20],phn[15];
    struct Node *next;
}node;
node *head=NULL,*temp=NULL;
void information()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    scanf("%s",n->name);
    scanf("%d",n->age);
    scanf("%s",n->email);
    scanf("%s",n->phn);
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
    temp=head;
while(temp!=NULL)
{
    printf("%s\n",temp->name);
     printf("%d\n",temp->age);
      printf("%s\n",temp->email);
       printf("%s\n",temp->phn);
    temp=temp->next;
}

}
void serch()
{
  temp=head;
  char name2[20];
  printf("if we serch the name");
  scanf("%s",name2);
  while(temp!=NULL && strcmp(temp->name,name2)!=0)
  {
      temp=temp->next;
  }
  if(strcmp(temp->name,name2)==0)
  {
      printf("%s\n",temp->name);
       printf("%d\n",temp->age);
        printf("%s\n",temp->email);
        printf("%s\n",temp->phn);
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
        information();
    }
    print();
    serch();
    return 0;
}
