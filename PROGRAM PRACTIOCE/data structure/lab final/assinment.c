#include<stdio.h>
#include<stdlib.h>

typedef struct Human
{
    char name[20];
    struct Human *next;
}node;

node *head=NULL;

node *temp=NULL;
node *cr=NULL;
//node *previous=NULL;

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
    temp = head;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,b1=0,c1=0,p;
while(temp!=NULL)
{

     if(temp->name[0]=='a' ||temp->name[0]=='A')

    {
        cr=head;
        if(a==0)
        {
             printf("Now see  a found\n");
        }

        while(cr!=NULL)
        {
           if((cr->name[1]=='b' || cr->name[1]=='B') && (cr->name[0]=='a' ||cr->name[0]=='A') )
        {
            if(b1==0)
            {
               printf("%s\n ",cr->name);
            }
        }
        cr=cr->next;
        }
        cr=head;
        while(cr!=NULL)
         {
          if(cr->name[0]=='a' ||cr->name[0]=='A' && cr->name[1]=='c' ||cr->name[1]=='C')
        {
             if(c1==0)
            {
                printf("%s\n ",cr->name);
            }


        }
        cr=cr->next;
         }
      a++;
    }
     b1++;
    c1++;

    temp=temp->next;


}
temp=head;
while(temp!=NULL)
{

    if(temp->name[0]=='b' ||temp->name[0]=='B')
    {
        if(b==0)
        {
             printf("Now see  b found\n");
        }
        printf("%s\n ",temp->name);
        b++;

    }
    temp=temp->next;



}
temp=head;


    while(temp!=NULL)
{

     if(temp->name[0]=='c' ||temp->name[0]=='C')

    {
        if(c==0)
        {
             printf("Now see  c found\n");
        }
        printf("%s\n ",temp->name);


        c++;
    }
     temp=temp->next;
}
temp=head;
    while(temp!=NULL)
{
     if(temp->name[0]=='d' ||temp->name[0]=='D')

    {
        if(d==0)
        {
             printf("Now see  d found\n");
        }
        printf("%s\n ",temp->name);

       d++;

    }
     temp=temp->next;
}
temp=head;
    while(temp!=NULL)
{
     if(temp->name[0]=='e' ||temp->name[0]=='E')

    {
        if(e==0)
        {
             printf("Now see  b found\n");
        }
        printf("%s\n ",temp->name);

      e++;

    }
     temp=temp->next;
}
   temp = head;
while(temp!=NULL)
{


    if(temp->name[0]=='f' ||temp->name[0]=='F')

    {
        if(f==0)
        {
             printf("Now see  f found\n");
        }
        printf("%s\n ",temp->name);

    }
    temp=temp->next;


   f++;
}
   temp = head;

while(temp!=NULL)
{
    if(temp->name[0]=='g' ||temp->name[0]=='G')

    {
        if(g==0)
        {
             printf("Now see  g found\n");
        }
        printf("%s\n ",temp->name);

    }
    temp=temp->next;

    g++;

}
   temp = head;
while(temp!=NULL)
{


    if(temp->name[0]=='h' ||temp->name[0]=='H')

    {
        if(h==0)
        {
             printf("Now see  h found\n");
        }
        printf("%s\n ",temp->name);

    }
    temp=temp->next;

   h++;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='i' ||temp->name[0]=='I')

    {
        if(i==0)
        {
             printf("Now see  b found\n");
        }

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

   i++;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='j' ||temp->name[0]=='J')

    {
        if(j==0)
        {
             printf("Now see  j found\n");
        }

        printf("%s\n ",temp->name);

    }
    temp=temp->next;

    j++;

}
   temp = head;
while(temp!=NULL)
{

    if(temp->name[0]=='k' ||temp->name[0]=='K')

    {
        if(k==0)
        {
             printf("Now see  k found\n");
        }

        printf("%s\n ",temp->name);

    }
    temp=temp->next;


   k++;
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




