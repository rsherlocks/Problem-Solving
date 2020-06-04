#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct list{
    char name[100];
    struct list *next;
}LIST;

int main()
{
    int i, n, k = 0, v = 0, m = 0, j = 0;
    char str[100], c;
    LIST *p_first = NULL, *p_act = NULL, *p_prev = NULL;

    while((c=getchar())!='k')
    {
        if(c=='i')
        {
            if(k == 0)
            {
                p_first = (LIST *) malloc(sizeof(LIST));  //scan first element of struct
                scanf("%s", p_first->name);
                p_act = p_first;
            }
            else
            {
                p_act->next = (LIST *) malloc(sizeof(LIST));  //scan next element of struct
                p_act = p_act->next;
                scanf("%s", p_act->name);

                //here should be code to sort text alphabetically
        }
        p_act->next = NULL;
        k++;
    }
    else if(c=='d')
    {
        //display all elements of linked list

        for(i = 0; i < k; i++) {
            if(i == 0)
                p_act = p_first;
            else
                p_act = p_act->next;
            printf("%s\n", p_act->name);
        }
    }
    }
    getchar();
    return 0;
}
