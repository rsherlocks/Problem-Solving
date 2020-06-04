#include <stdio.h>
#include <stdlib.h>

struct node
{
    int age, salary;
    char name[10];
    struct node *next;
};

struct node *head = NULL;

void createList()
{
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the name of the employee ");
    scanf("%s", newNode->name);
    printf("Enter the age of the employee ");
    scanf("%d", &newNode->age);
    printf("Enter the salary of the employee ");
    scanf("%d", &newNode->salary);
    newNode->next = NULL;

    if(head ==NULL)
    {
        head = newNode;
    }

    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }


    printf("\nEMPLOYEE INFO LIST CREATED SUCCESSFULLY\n");
}


void displayList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("\nName of the employee is = %s", temp->name);
            printf("\nAge of the employee is = %d", temp->age);
            printf("\nSalary of the employee is = %d\n", temp->salary);
            temp = temp->next;
        }
    }
}


void search()
{
    char name[20];

    printf("\nenter name you want to search: ");
    scanf("%s", name);

    struct node *temp = head;

    while(temp != NULL && strcmp(temp->name, name)!= 0)
    {
        temp = temp -> next;
    }

    if( strcmp(temp->name, name)== 0)
    {
        printf("\n Found and your information is:");
        printf("\nName of the employee is = %s", temp->name);
        printf("\nAge of the employee is = %d", temp->age);
        printf("\nSalary of the employee is = %d\n", temp->salary);
    }

    else
    {
        printf("\nNOt found");
    }

}

int main()
{
    int i,n;  //age, salary, choice, choice2, position;
    char name[10];

    printf("Enter the total number of Employee: ");
    scanf("%d", &n);

    for(i = 0 ; i< n ; i++)
    {
        createList();

    }
    displayList();

    search();


}


