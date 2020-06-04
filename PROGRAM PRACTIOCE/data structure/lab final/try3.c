#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

struct charNode
{
   char cityname[15];
   struct charNode *next;
};

typedef struct charNode charNode;

 void addElement(charNode **start, char city[], double numberone, double numbertwo);
void printList(charNode *start, charNode *temp);
charNode* newNode(char city[], double numberone, double numbertwo);
charNode* getString(charNode *start);
charNode *sort(charNode *start);

int main()
{
   charNode *start = NULL;

   start = getString(start);
   printList(start, start);
   start = sort(start);
   printList(start, start);
   return 0;
}


charNode* getString(charNode *start)
{

        char *city1, *city2, *city3, *city4, *city5;

        char a[10],b[10],c[10],d[10],e[10];
        scanf("%s",a);
        scanf(" %s", b);
        scanf(" %s", c);
                 scanf(" %s", d);
                    scanf(" %s", e);


        if ((city1 = malloc(sizeof(char) * 15)) == NULL) {
        }

        strcpy(city1, a);


        if ((city2 = malloc(sizeof(char) * 15)) == NULL) {
        }
        strcpy(city2, b);

        if ((city3 = malloc(sizeof(char) * 15)) == NULL) {
        }
        strcpy(city3, c);

        if ((city4 = malloc(sizeof(char) * 15)) == NULL) {
        }

        strcpy(city4, d);


        if ((city5 = malloc(sizeof(char) * 15)) == NULL) {
        }

        strcpy(city5, e);


        addElement(&start, city1,  28.8, 17.6);
        addElement(&start, city2, 5.6, 79.12);
        addElement(&start, city3, 55.3, 49.9);
        addElement(&start, city4, 22.22, 11.11);
        addElement(&start, city5, 22.22, 11.11);


    return start;
}

 void addElement(charNode **start, char city[], double numberone, double numbertwo)
{

   charNode *temp,*prev, *loc;

   temp = newNode(city, numberone, numbertwo);


   if (*start == NULL)
   {
      *start = temp;
   }

   else
   {
      loc = *start;
      prev = NULL;

      while (loc != NULL)
      {
         prev = loc;
         loc = loc->next;
      }


      temp->next = loc;
      if (prev == NULL)
      {
         *start = temp;
      }
      else
      {
         prev->next = temp;
      }
   }

}


charNode* newNode(char city[], double numberone, double numbertwo)

{

   charNode *temp;

   temp = (charNode *) malloc(sizeof(charNode));
   if (temp == NULL)
   {
      printf("WARNING - Memory allocation error\n");
      exit(EXIT_FAILURE);
   }


   strcpy(temp->cityname, city);


   temp->next = NULL;

   return temp;
}


void printList(charNode *start, charNode *temp)
{

   while (start != NULL )
   {
      printf("\n%s", start->cityname);


      start = start->next;
   }
       printf("\n");

}



charNode *sort(charNode *start)
{

   charNode *current = start;
   charNode *N = start;
   charNode *S = start->next;
   charNode *W = start->next->next;
   charNode* E = start->next->next->next;


   while (current != NULL)
    {
      if (current->next->cityname < start->cityname )
      {

         printf("%s %s %s", "\nFound a smaller character", current->next->cityname, "\n");

          E->next = N;
          W->next = NULL;
          start = E;
       }
        current = current->next;
    }

    return start;

}
