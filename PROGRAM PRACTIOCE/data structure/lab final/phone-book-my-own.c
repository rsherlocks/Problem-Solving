/// PHONEBOOK

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    int age;
    char name[10], email[25], phn[20];
    struct node *next;
};

struct node *current, *head = NULL, *newnode1, *newnode2, *newnode3, *newnode4, *newnode5;

void createList()
{
    struct node *newNode, *temp;

    head = (struct node *)malloc(sizeof(struct node));
    strcpy(head->name,"amin");
    strcpy(head->email,"aminkai458@gamil.com");
    head->age=21;
    strcpy(head->phn,"01918896572");
    head->next = NULL;

    newnode1 = (struct node *)malloc(sizeof(struct node));
    strcpy(newnode1->name,"kabbo");
    strcpy(newnode1->email,"kabbofice@gamil.com");
    newnode1->age=21;
    strcpy(newnode1->phn,"01521333848");
    newnode1->next = NULL;
    head->next=newnode1;

    newnode2 = (struct node *)malloc(sizeof(struct node));
    strcpy(newnode2->name,"poran");
    strcpy(newnode2->email,"poran@gmail.com");
    newnode2->age=21;
    strcpy(newnode2->phn,"0181501832");
    newnode2->next = NULL;
    newnode1->next=newnode2;

    newnode3 = (struct node *)malloc(sizeof(struct node));
    strcpy(newnode3->name,"rakib");
    strcpy(newnode3->email,"rakib@gmail.com");
    newnode3->age=21;
    strcpy(newnode3->phn,"01988559454");
    newnode3->next = NULL;
    newnode2->next=newnode3;

    newnode4 = (struct node *)malloc(sizeof(struct node));
    strcpy(newnode4->name,"mrinmoy");
    strcpy(newnode4->email,"mrinmoy@gmail.com");
    newnode4->age=21;
    strcpy(newnode4->phn,"01521331607");
    newnode4->next = NULL;
    newnode3->next=newnode4;

    newnode5 = (struct node *)malloc(sizeof(struct node));
    strcpy(newnode5->name,"zahid");
    strcpy(newnode5->email,"zahid@gmail.com");
    newnode5->age=21;
    strcpy(newnode5->phn,"01521474717");
    newnode5->next = NULL;
    newnode4->next=newnode5;

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
            printf("\n  Person name       = %s", temp->name);
            printf("\n  Person age        = %d", temp->age);
            printf("\n  Person email      = %s", temp->email);
            printf("\n  Person phone num. = %s\n", temp->phn);
            temp = temp->next;
        }
    }
}

void deletee(struct node *previous,struct node *current)
{

    if(current == head)
    {
        head=head->next;
        free(current);
    }

    else
    {

        previous->next=current->next;
        free(current);
        printf("\nData deleted\n\n");

    }

}

void edit(struct node *current)
{
    printf("\nEnter new info of this person\n");

    printf("\nEnter the name of the person: ");
    scanf("%s", current->name);
    printf("\nEnter the email of the person: ");
    scanf(" %s", current->email);
    printf("\nEnter the age of the person: ");
    scanf("%d", &current->age);
    printf("\nEnter the phone number of the person: ");
    scanf("%s", current->phn);

}

void search()
{
    char str[20];
    int a;
    struct node *current, *previous;
    current = head;
    printf("\nEnter name or email or phone to search any contact: ");
    scanf("%s", str);

    while(current != NULL && strcmp(current->name, str)!= 0 && strcmp(current->email, str) != 0 &&  strcmp(current->phn, str) != 0 )
    {
        previous=current;
        current = current -> next;
    }

    if( strcmp(current->name, str)== 0 || strcmp(current->email, str) == 0 ||  strcmp(current->phn, str) == 0 )
    {
        printf("\nFound the person information\n");
        printf("\n Name   = %s", current->name);
        printf("\n Age    = %d", current->age);
        printf("\n Email  = %s", current->email);
        printf("\n Phone  = %s\n", current->phn);


        printf("\n1. Delete\n\n2. Modify\n\n3. Exit\n");
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            deletee(previous,current);
            printf("\nAfter deleting the new list\n:");
            displayList();
            break;

        case 2:
            edit(current);
            printf("\nContact is Updated\n");
            printf("\n Name  is = %s", current->name);
            printf("\n Age   is = %d", current->age);
            printf("\n Email is = %s", current->email);
            printf("\n Phone is = %s\n", current->phn);
            break;

        case 3:
            return;

        }
    }
    else
    {
        printf("\nNot Found");
    }
}

void insert()
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter the name of the person: ");
    scanf(" %s", newNode->name);
    printf("Enter the email of the person: ");
    scanf(" %s", &newNode->email);
    printf("Enter the age of the person: ");
    scanf(" %d", &newNode->age);
    printf("Enter the phone number of the person: ");
    scanf(" %s", &newNode->phn);
    newNode->next = NULL;

    temp = head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;

    printf("\nCONTACT INSERTED SUCCESSFULLY\n");
}

void count()
{
    struct node* current;
    int count = 0;
    current=head;
    while(current!=NULL)
    {
        current=current->next;
        count++;
    }
    printf("\nTotal node = %d \n",count);
}

int main()
{
    system("color 0a");
    printf("\n\t\t********** WELCOME TO PHONEBOOK *************\n");

    int age, n, choice, a;
    char name[10], email[25], phn[20], str[20];

    while(1)
    {
        printf("\n\n\t\t\t**** MENU ****\t\n\n 1. Display.\t2. Search or Delete or Modify.\t3. Insert new contact.\n\n 4. Total contact.\t5. Exit.\n\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("\n\tCONTACT LIST:\n");
            createList();
            displayList();
            break;
        case 2:
            search();
            break;
        case 3:
            insert();
            break;
        case 4:
            count();
            break;
        case 5:
            return 0;
        }
    }
}
