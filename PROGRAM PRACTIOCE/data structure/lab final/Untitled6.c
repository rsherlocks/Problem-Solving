#include<stdio.h>
#include<stdlib.h>

typedef struct Human
{
    char name[20];
    struct Human *next;
}node;

node *head=NULL;

node *temp=NULL;


void information()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("\n\nEnter name: ");
    scanf("%s",n->name);
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
    printf("\n\n\nThe list is:\n");
    temp = head;
    while(temp!=NULL)
    {
        printf("%s\n ",temp->name);
        temp=temp->next;
    }

}

void search()
{
    printf("Now Display in Alphabetic Order\n\n");
    temp = head;
while(temp!=NULL)
{

     if(temp->name[0]=='a' ||temp->name[0]=='A')

    {
             printf("%s\n ",temp->name);

    }
    temp=temp->next;


}
temp=head;
while(temp!=NULL)
{

    if(temp->name[0]=='b' ||temp->name[0]=='B')
    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;



}
temp=head;


    while(temp!=NULL)
{

     if(temp->name[0]=='c' ||temp->name[0]=='C')

    {
        printf("%s\n ",temp->name);
    }
     temp=temp->next;
}
temp=head;
    while(temp!=NULL)
{
     if(temp->name[0]=='d' ||temp->name[0]=='D')

    {
        printf("%s\n ",temp->name);


    }
     temp=temp->next;
}
temp=head;
    while(temp!=NULL)
{
     if(temp->name[0]=='e' ||temp->name[0]=='E')

    {
        printf("%s\n ",temp->name);


    }
     temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{


    if(temp->name[0]=='f' ||temp->name[0]=='F')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;

while(temp!=NULL)
{
    if(temp->name[0]=='g' ||temp->name[0]=='G')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{


    if(temp->name[0]=='h' ||temp->name[0]=='H')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='i' ||temp->name[0]=='I')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='j' ||temp->name[0]=='J')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='k' ||temp->name[0]=='K')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='l' ||temp->name[0]=='L')

    {


        printf("%s\n ",temp->name);

    }
    temp=temp->next;


}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='m' ||temp->name[0]=='M')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='n' ||temp->name[0]=='N')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;


}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='o' ||temp->name[0]=='O')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='p' ||temp->name[0]=='P')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='q' ||temp->name[0]=='Q')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='r' ||temp->name[0]=='R')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='s' ||temp->name[0]=='S')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='t' ||temp->name[0]=='T')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='u' ||temp->name[0]=='U')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='v' ||temp->name[0]=='V')

    {

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='w' ||temp->name[0]=='W')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;


}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='x' ||temp->name[0]=='X')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;


}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='y' ||temp->name[0]=='Y')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='z' ||temp->name[0]=='Z')

    {
        printf("%s\n ",temp->name);

    }
    temp=temp->next;
}
}



int main()
{
    int k,i;

    printf("\nHow many information stored:  ");
    scanf("%d",&k);

    for(i=0; i<k; i++)
    {
        information();
    }

    print();

    search();

 return 0;

}




