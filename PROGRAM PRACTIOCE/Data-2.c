#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    char name[10];
    int age;
    char email[100];
    int number;
    struct node *next;

} p;
p *head=NULL;
void information(int n)
{
    struct node *n1;
    int i;
    n1=(n*)malloc(sizeof(n));
    printf("enter name\n");
    scanf("%c",&n1->name[i]);
    printf("enter age\n");
    scanf("%d",&n1->age);
    scanf("%c",&n1->email[i]);
    scanf("%d",&n1->number);


}
void search()
{
    p *head;
    p *next;
    p *current;
    char person;
    scanf("%c",&person);
    current==head;
    while(current!=NULL && current->name!=person)
    {
        current=current->next;
    }
    if(current->name==person)
    {
        printf("Found\n");
    }
}
void delete()
{
    p *next;
    p *current;
    char pereson;
    printf("which information u want to delete? ");
    scanf("%c",&person);
    current=head;
    if(head->name==person)
    {
        head=head->next;
        free(current);
    }

}
int main()
{
    int n,i;
    printf("enter the total number of person");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        information();
    }
    delete();
    search();
}
