#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
    int age;
    struct data *next;
}m;

  m *head=NULL;
  m *current=NULL;
  m *previous=NULL;

void insert()
{
 m *n1=malloc(sizeof(m));
 printf("\nEnter age: ");
 scanf("%d",&n1->age);
 n1->next=NULL;

if(head==NULL)
{
    head=n1;
}

else
{
    current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }

    current->next=n1;
}

}

void print()
{
    printf("\n\nThe list is: ");
    current = head;
    while(current!=NULL)
    {
        printf("%d ",current->age);
        current=current->next;
    }

}

void search()
{
     int x;
    printf("\n\nEnter data you want to search: ");
    scanf("%d", &x);
    current =head;
    while (current!=NULL && current->age!=x)
    {
        current=current->next;
    }
    if(current->age==x)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }

}
   void delete()
   {
       int x;
    printf("\n\nEnter data you want to delete: ");
    scanf("%d", &x);
    current =head;
    if(head->age==x)
    {
        head=head->next;
        free(current);
    }
    else
    {
        while(current=NULL && current->age!=x)
        {
            previous=current;
            current=current->next;
        }
        if(current->age==x)
        {
            previous->next=current->next;
            free(current);
        }
    }



   }



int main()
{
    int n,i;

    printf("\nHow many nodes to create:  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        insert();
    }

    print();

    search();

    delete();

    print ();
}

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int age, salary;
    char name[10];
    struct node *next;
};

struct node *head = NULL;

void createList(int n)
{
    struct node *newNode, *temp;
    int age, salary, i;
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
            printf("\nEnter the name of the employee %d: ",i);
            scanf("%s", newNode->name);
            printf("Enter the age of the employee %d: ",i);
            scanf("%d", &newNode->age);
            printf("Enter the salary of the employee %d: ",i);
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
        }
    }
    printf("\nEMPLOYEE INFO LIST CREATED SUCCESSFULLY\n");
}

void insertNodeAtBeginning()
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("\nEnter name of the employee to insert at beginning of the list: ");
        scanf("%s", newNode->name);
        printf("Enter age of the employee to insert at beginning of the list: ");
        scanf("%d", &newNode->age);
        printf("Enter salary of the employee to insert at beginning of the list: ");
        scanf("%d", &newNode->salary);

        newNode->next = head;

        head = newNode;

        printf("\nDATA INSERTED SUCCESSFULLY\n");
    }
}

void insertNodeAtEnd()
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("\nEnter name of the employee to insert at end of the list: ");
        scanf("%s", newNode->name);
        printf("Enter age of the employee to insert at end of the list: ");
        scanf("%d", &newNode->age);
        printf("Enter salary of the employee to insert at end of the list: ");
        scanf("%d", &newNode->salary);

        newNode->next = NULL;
        temp = head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;

        printf("\nDATA INSERTED SUCCESSFULLY\n");
    }
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
        printf("Enter salary of the employee to insert at %d position of the list: ",position);
        scanf("%d", &newNode->salary);

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

/*void deleteNodeAtBeginning()
{
    struct node *todelete;

    todelete = head;

    if(todelete == NULL)
    {
        printf("List all ready empty.");
    }
    else
    {
        head = head->next;
        free(todelete);

        printf("\nDATA DELETED SUCCESSFULLY\n");
    }
}

void deleteNodeAtEnd()
{
    struct node *todelete, *temp;

    todelete = head;

    if(todelete == NULL)
    {
        printf("List all ready empty.");
    }
    else
    {
        temp = head;

        while(todelete->next!=NULL)
        {
            temp = todelete;
            todelete=todelete->next;
        }
        free(todelete);
        temp->next = NULL;

        printf("\nDATA DELETED SUCCESSFULLY\n");
    }
}*/

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
            printf("\nName of the employee is = %s", temp->name);
            printf("\nAge of the employee is = %d", temp->age);
            printf("\nSalary of the employee is = %d\n", temp->salary);
            temp = temp->next;
        }
    }
}

int main()
{
    int n, age, salary, choice, choice2, position;
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
            printf("\npress 1 for Insert any employee info at beginning of the list.\nor\npress 2 for Insert any employee info at end of the list.\nor\npress 3 for Insert employee info where you want in the list.\n\n");
            scanf("%d",&choice2);
            switch(choice2)
            {

            case 1:
                insertNodeAtBeginning();

                printf("\nData in the list \n");
                displayList();
                break;

            case 2:
                insertNodeAtEnd();

                printf("\nData in the list \n");
                displayList();
                break;

            case 3:
                printf("\nEnter the position where you want to insert the employee info: ");
                scanf("%d",&position);

                insertNodeAtnthposition(position);

                printf("\nData in the list \n");
                displayList();
                break;

            }
            break;
        case 3:
            printf("\nWhat do you want?\npress 1 for delete employee info at beginning of the list\nor\npress 2 for delete employee info at end of the list\nor\npress 3 for delete employee info at any position of the list\n");
            scanf("%d",&choice);
            switch(choice)
            {
            /*case 1:
                deleteNodeAtBeginning();

                printf("\nData in the list \n");
                displayList();
                break;

            case 2:
                deleteNodeAtEnd();

                printf("\nData in the list \n");
                displayList();
                break;*/
            case 3:
                printf("\nEnter position of the list where you want to delete the employ info: ");
                scanf("%d",&position);
                deleteNthposition(position);

                printf("\nData in the list \n");
                displayList();
                break;
            }
            break;

        }

    }
    return 0;
}



