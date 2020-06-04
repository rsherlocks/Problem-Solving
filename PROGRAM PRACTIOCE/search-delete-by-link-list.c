#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;

                temp->next = newNode;

                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        newNode->next = head;

        head = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;

        temp = head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void insertNodeAtnthposition(int data, int position)
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
        newNode->data=data;

        while(count < position-1)
        {
            current=current->next;
            count++;
        }

        newNode->next = current->next;
        current->next = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");
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
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
void datasearch(int search)
{
    struct node *current, *previous;
    current = head;
    if(head->data== search)
    {
        head=head->next;
        free(current);
    }
    else
    {
        while(current!=NULL && current->data!=search)
        {
            previous=current;
            current=current->next;
        }
        if(current->data==search)
        {
            previous->next=current->next;
            free(current);
        }
    }
}

int main()
{
    int n, data, choice, position,search;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\nEnter the data you want to search: ");
    scanf("%d",&search);
    datasearch(search);

    printf("\nData in the list \n");
    displayList();

    /*printf("\nWhat do you want?\npress 1 for insert node at beginning of the list.\nor\npress 2 for insert node at end of the list.\nor\npress 3 for insert node where you want in the list.\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter data to insert at beginning of the list: ");
        scanf("%d", &data);
        insertNodeAtBeginning(data);

        printf("\nData in the list \n");
        displayList();
        break;

    case 2:
        printf("\nEnter data to insert at end of the list: ");
        scanf("%d", &data);
        insertNodeAtEnd(data);

        printf("\nData in the list \n");
        displayList();
        break;

    case 3:
        printf("\nEnter data to position of the list where you want to insert the node: ");
        scanf("%d",&position);

        printf("\nEnter data to insert at %d position of the list: ",position);
        scanf("%d", &data);
        insertNodeAtnthposition(data,position);

        printf("\nData in the list \n");
        displayList();
    }*/

    return 0;
}

