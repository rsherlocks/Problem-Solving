#include <stdio.h>
#include <stdlib.h>

struct node
{
    int age, phn;
    char name[10];
    struct node *next;
};

struct node *head = NULL;

void createList(int n)
{
    struct node *newNode, *temp;
    int age, phn, i;
    char name[10];

    for(i=1; i<=n; i++)
    {

        newNode = (struct node *)malloc(sizeof(struct node));

        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
        }
        else
        {
            printf("\nEnter the name of the employee 1 : ");
            scanf("%s", newNode->name);
            printf("Enter the age of the employee 1: ");
            scanf("%d", &newNode->age);
            printf("Enter the phone number of the employee 1: ");
            scanf("%d", &newNode->phn);
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
        }
    }
    printf("\nEMPLOYEE INFO LIST CREATED SUCCESSFULLY\n");
}

void insertNodeAtnthposition(int position)
{
    struct node *newNode, *current;
    int count=1;

    current=head;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }

    else
    {
        printf("\nEnter name of the employee to insert at %d position of the list: ",position);
        scanf("%s", newNode->name);
        printf("Enter age of the employee to insert at %d position of the list: ",position);
        scanf("%d", &newNode->age);
        printf("Enter phone number of the employee to insert at %d position of the list: ",position);
        scanf("%d", &newNode->phn);

        while(count < position-1)
        {
            current=current->next;
            count++;
        }

        newNode->next = current->next;
        current->next = newNode;

        printf("\nDATA INSERTED SUCCESSFULLY\n");
    }
}

void deleteNthposition(int position)
{
    struct node *newNode, *current;
    int count=1;

    current=head;

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }

    else
    {
        while(count < position-1)
        {
            current=current->next;
            count++;
        }

        newNode = current;
        current = current->next;
        newNode->next = current->next;
        free(current);

        printf("\nDATA DELETED SUCCESSFULLY\n");
    }
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
            printf("\nName of the employee is         = %s", temp->name);
            printf("\nAge of the employee is          = %d", temp->age);
            printf("\nPhone number of the employee is = %d\n", temp->phn);
            temp = temp->next;
        }
    }
}

int main()
{
    int n, age, phn, choice, choice2, position;
    char name[10];

    printf("Enter the total number of Employee: ");
    scanf("%d", &n);
    createList(n);

    while(1)
    {
        printf("\nWhat do you want to do???\npress 1 if you want to Display employee info.\nor\npress 2 if you want to Insert any employee info.\nor\npress 3 if you want to Delete any employee info.\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEmployee info in the list \n");
            displayList();
            break;

        case 2:
            printf("\nEnter the position where you want to insert the employee info: ");
            scanf("%d",&position);

            insertNodeAtnthposition(position);

            printf("\nData in the list \n");
            displayList();
            break;
        case 3:
                printf("\nEnter position of the list where you want to delete the employ info: ");
                scanf("%d",&position);
                deleteNthposition(position);

                printf("\nData in the list \n");
                displayList();
                break;
        }

    }
    return 0;
}
