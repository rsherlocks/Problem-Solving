#include<stdio.h>
#define MAX_SIZE 4
int stack[MAX_SIZE];
int top=-1;
void push(char data)
{
if(top==MAX_SIZE-1)
{
    printf("stack is full!!\n");
    return;
}
else
{
    top++;
    stack[top]=data;
}
}
char pop()
{
    if(top==-1)
    {
        printf("\n stack in empty! nothing to pop!!\n\n");
    }
    else
    {
        int element=stack[top];
        top--;
        return element;
    }
}
void display()
{
    if(top==-1)
    {
        printf("\n stack is empty!!\n");
    }


else
{
    int i;
    printf("\n the stack\n");
    for(i=0;i<=top;i++)
    {
        printf("\t %c\n",stack[i]);
    }
    printf("\n reched at the TOP!!\n");
}
}
    void main()
    {
        printf("\n\t\t***puss operation ***\n");
        push('a');
        push('b');
        push('c');
        push('d');
        display();
         printf("\n\t\t***POP operation***\n");
          int i;
          for(i=0;i<MAX_SIZE;i++)
          {

         int popped_element=pop();
         printf("\n\t popped element is: %c \n\n\n", popped_element);
          }


    }




