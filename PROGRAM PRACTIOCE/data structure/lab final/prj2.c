
#include<stdio.h>
#include<stdlib.h>

typedef struct Human
{
    char name[20];
    char cntry[10];
    char phn[11];
    char email[15];
    struct Human *next;
}node;

node *head=NULL;

node *temp=NULL;
node *previous=NULL;

void information()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("\n\nEnter name: ");
    scanf("%s",n->name);
    printf("\n\nEnter Country: ");
    scanf("%s",&n->cntry);
    printf("\n\nEnter phone number: ");
    scanf("%s",n->phn);
    printf("\n\nEnter email: ");
    scanf("%s",n->email);

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
    temp = head;
    while(temp!=NULL)
    {
        printf("\n\n\nThe list is:\n");
        printf("\n\n Display name: ");
        printf("%s\n ",temp->name);
        printf("\n\n Display Country: ");
        printf("%s\n ",temp->cntry);
        printf("\n\n Display Number: ");
        printf("%s\n",temp->phn);
        printf("\n\n Display Email: ");
         printf("%s\n ",temp->email);
        temp=temp->next;
    }

}

void search()
{
    char check[10];
    printf("\n\nEnter data you want to search: ");
    scanf("%s", check);
    temp =head;
    while (temp!=NULL && strcmp (temp->name,check)!=0 && strcmp(temp->phn,check) !=0 && strcmp(temp->email,check)!=0  )
    {
        previous=temp;
        temp=temp->next;
    }
    if(strcmp (temp->name,check)==0|| strcmp(temp->phn,check) ==0 ||strcmp(temp->email,check)==0)

    {
          printf("\n\n\nThe list is:\n");
        printf("\n\n Display name: ");
        printf("%s\n ",temp->name);
        printf("\n\n Display Country: ");
        printf("%s\n ",temp->cntry);
        printf("\n\n Display Number: ");
        printf("%s\n",temp->phn);
        printf("\n\n Display Email: ");
         printf("%s\n ",temp->email);


}
}
void search1()
{
    char check[10];
    printf("\n\nEnter data you want to search: ");
    scanf("%s", check);
    temp =head;
    while (temp!=NULL && strcmp (temp->name,check)!=0 && strcmp(temp->phn,check) !=0 && strcmp(temp->email,check)!=0  )
    {
        previous=temp;
        temp=temp->next;
    }
    if(strcmp (temp->name,check)==0|| strcmp(temp->phn,check) ==0 ||strcmp(temp->email,check)==0)

    {
        printf("found\n");

         printf("\n\n\nThe list is:\n");
        printf("\n\n Display name: ");
        printf("%s\n ",temp->name);
        printf("\n\n Display Country: ");
        printf("%s\n ",temp->cntry);
        printf("\n\n Display Number: ");
        printf("%s\n",temp->phn);
        printf("\n\n Display Email: ");
         printf("%s\n ",temp->email);

            delelte(previous,temp);


    }
    else
    {
        printf("not found");
    }


}
void delelte(node *previous, node *temp)
{

    if(temp ==head)
    {

        head=head->next;
        free(temp);

    }
    else
    {
        previous->next=temp->next;
        free(temp);
    }


}
void search2()
{
    char check[10];
    printf("\n\nEnter data you want to search: ");
    scanf("%s", check);
    temp =head;
    while (temp!=NULL && strcmp (temp->name,check)!=0 && strcmp(temp->phn,check) !=0 && strcmp(temp->email,check)!=0  )
    {
        previous=temp;
        temp=temp->next;
    }
    if(strcmp (temp->name,check)==0|| strcmp(temp->phn,check) ==0 ||strcmp(temp->email,check)==0)

    {
        printf("found\n");
         printf("\n\n\nThe list is:\n");
        printf("\n\n Display name: ");
        printf("%s\n ",temp->name);
        printf("\n\n Display Country: ");
        printf("%s\n ",temp->cntry);
        printf("\n\n Display Number: ");
        printf("%s\n",temp->phn);
        printf("\n\n Display Email: ");
         printf("%s\n ",temp->email);
            printf("\n\nEnter updat name: ");
            scanf("%s",temp->name);
            printf("\n\nEnter update Country: ");
            scanf("%s",&temp->cntry);
            printf("\n\nEnter update phone number: ");
            scanf("%s",temp->phn);
            printf("\n\nEnter update email: ");
            scanf("%s",temp->email);



    }
    else
    {
        printf("not found");
    }

    update_print(temp);


}
void  update_print(node*temp)
{

    printf("\n\nThe list is:\n");
    temp = head;
    while(temp!=NULL)
    {
      printf("\n\n\nThe list is:\n");
        printf("\n\n Display name: ");
        printf("%s\n ",temp->name);
        printf("\n\n Display Country: ");
        printf("%s\n ",temp->cntry);
        printf("\n\n Display Number: ");
        printf("%s\n",temp->phn);
        printf("\n\n Display Email: ");
         printf("%s\n ",temp->email);
        temp=temp->next;
    }

}


int main()
{

system("color 0a");
    printf("\t\t**********WELCOME TO PHONEBOOK*************");

printf("\n\n\t\t\t  MENU CLOUR \t\t\n\n");
printf("\n\t\t      select anyone clour \t\t\t\n\n");
printf("\t0.BLACK   \t1.BLUE   \t2.GREEN  \n\t3.AQUA   \t4.RED   \t5.PURPUL \n\t6.YELLO \t7.WHITE \t8.GRAY \n");
int p,i,n;
    scanf("%d",&p);
    if(p==0)
    {
    system("color 0f");
    start();
    return 0;
    }
    if(p==1)
    {
    system("color 1f");
    start();
    return 0;
    }
    if(p==2)
    {
    system("color 2f");
    start();
    return 0;
    }
    if(p==3)
    {
    system("color 3f");
    start();
    return 0;
    }
    if(p==4)
    {
    system("color 4f");
    start();
    return 0;
    }
    if(p==2)
    {
    system("color 2f");
    start();
    return 0;
    }
    if(p==5)
    {
    system("color 5f");
    start();
    return 0;
    }
    if(p==6)
    {
    system("color 6f");
    start();
    return 0;
    }
    if(p==7)
    {
    system("color 7f");
    start();
    return 0;
    }
    if(p==8)
    {
    system("color 8f");
    start();
    return 0;
    }


}
void start()
{
    int k;
    printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete \n");
scanf("%d",&k);
if(k==1)
{
        information();
        start();
}

if(k==2)
{
     print();
     start();
}
if(k==3)
{
     exit(0);

}
  if(k==4)
{
    print("What Contact you modify");
     search2();
     start();
}

if(k==5)
{
     search();
     start();
}
if(k==6)
{
      search1();
      start();
}



    return 0;
}



