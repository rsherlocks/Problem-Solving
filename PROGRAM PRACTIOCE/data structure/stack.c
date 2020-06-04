#include<stdio.h>
#define m 5
int top=-1;
int stack[];
int push(char n)
{

    if(top==m-1)
    {
        printf("stack is full\n");
    }
    else
    {

        top++;
        stack[top]=n;
    }

}
void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        int k,p;
        for(k=0;k<=top;k++)
        {
            printf("pop=%c\n",stack[k]);
        }
         for(p=top;p>=0;p--)
        {
            printf("top=%c\n",stack[p]);
        }

    }
}

char pop()
{
    if(top==-1)
    {
        printf("strack empty\n");
    }
    else
    {
        int element=stack[top];
        top--;
        return element;
    }
}
void main()
{

    push('a');
    push('b');
    push('c');
    push('d');
    push('e');
    display();
    int j;
    for(j=0;j<m;j++)
    {
        int poped_element=pop();
        printf("poped %c\n",poped_element);
    }
}

