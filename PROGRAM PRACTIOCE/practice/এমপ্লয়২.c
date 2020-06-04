#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int age,salary;
    char name[10];
    struct *next;

}node;
node *head=NULL;
int main()
{
  int i,k;
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
      createList();
      print();
  }
  return 0;
}
createList()
{
    node *temp=NULL,*n;
    n=(node*)malloc(sizeof(node));
    scanf("%s",n->name);
    scanf("%d%d",n->age,n->salary);
    if(head==NULl)
    {
        head=n;
    }
    else
    {
        temp=head;
        while(temp->next!=NULl)
        {
            t=t->next;
        }
        t->next=n;
    }
}
print()
{
    while(t!=NULL)
    {
        printf("%d\n",n->name);
        printf("%d\n",n->age);
        printf("%d\n",n->salary);
        t=t->next;

    }
}
