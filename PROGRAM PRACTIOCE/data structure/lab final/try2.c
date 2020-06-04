#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct list{
char ch;
struct list *next_rec;
};
typedef struct list LIST;
typedef LIST *LISTPTR;

int main( void )
 {
    LISTPTR first = NULL;  /* head pointer */
    int i = 0;
    int ch;
    char trash[256];       /* to clear stdin buffer. */

    while ( i++ < 5 )      /* build a list based on 5 items given */
    {
       ch = 0;
       printf("\nEnter character %d, ", i);

       do
       {
           printf("\nMust be a to z: ");
           ch = getc(stdin);  /* get next char in buffer  */
           gets(trash);       /* remove trash from buffer */
       } while( (ch < 'a' || ch > 'z') && (ch < 'A' || ch > 'Z'));

       first = add_to_list( ch, first );
    }

   show_list( first );           /* Dumps the entire list */
   free_memory_list( first );    /* Release all memory */
   getch();
   return(0);
}

void add_to_list(int ch, LISTPTR first)
{
LISTPTR new_rec=NULL;
LISTPTR tmp_rec=NULL;
LISTPTR prev_rec=NULL;

new_rec=(LISTPTR)malloc(sizeof(LIST));
if(!new_rec){
    printf("Unable to allocate\n");
    getch();
    exit(1);}
new_rec->ch=ch;
new_rec->next_rec=NULL;
if(first==NULL){
    first=new_rec;
    new_rec->next_rec=NULL;}
else
{
if ( new_rec->ch < first->ch)
       {
          new_rec->next_rec = first;
          first = new_rec;
       }
       else   /* it is being added to the middle or end */
       {
          tmp_rec = first->next_rec;
          prev_rec = first;

         /* Check to see where link is added. */

          if ( tmp_rec == NULL )
          {
              /* we are adding second record to end */
              prev_rec->next_rec = new_rec;
          }
          else
          {
             /* check to see if adding in middle */
             while (( tmp_rec->next_rec != NULL))
             {
                if( new_rec->ch < tmp_rec->ch )
                {
                   new_rec->next_rec = tmp_rec;
                   if (new_rec->next_rec != prev_rec->next_rec)
                   {
                      printf("ERROR");
                      getc(stdin);
                      exit(0);
                   }
                   prev_rec->next_rec = new_rec;
                   break;   /* link is added; exit while */
                }
                else
                {
                  tmp_rec = tmp_rec->next_rec;
                  prev_rec = prev_rec->next_rec;
                }
             }

             /* check to see if adding to the end */
             if (tmp_rec->next_rec == NULL)
             {
                if (new_rec->ch < tmp_rec->ch ) /* 1 b4 end */
                {
                   new_rec->next_rec = tmp_rec;
                   prev_rec->next_rec = new_rec;
                }
                else  /* at the end */
                {
                   tmp_rec->next_rec = new_rec;
                   new_rec->next_rec = NULL;  /* redundant */
                }
             }
          }
       }
    }
    return(first);
 }

 /*========================================================*
  * Function: show_list
  * Purpose : Displays the information current in the list
  *========================================================*/

 void show_list( LISTPTR first )
{
    LISTPTR cur_ptr;
  int counter = 1;

    printf("\n\nRec addr  Position  Data  Next Rec addr\n");
    printf("========  ========  ====  =============\n");

    cur_ptr = first;
    while (cur_ptr != NULL )
    {
       printf("  %X   ", cur_ptr );
       printf("     %2i       %c", counter++, cur_ptr->ch);
       printf("      %X   \n",cur_ptr->next_rec);
       cur_ptr = cur_ptr->next_rec;
    }
 }

 /*========================================================*
  * Function: free_memory_list
  * Purpose : Frees up all the memory collected for list
  *========================================================*/

 void free_memory_list(LISTPTR first)
 {
    LISTPTR cur_ptr, next_rec;
    cur_ptr = first;                 /* Start at beginning */

    while (cur_ptr != NULL)          /* Go while not end of list */
    {
       next_rec = cur_ptr->next_rec; /* Get address of next record */
       free(cur_ptr);                /* Free current record */
       cur_ptr = next_rec;           /* Adjust current record*/
  }
}
