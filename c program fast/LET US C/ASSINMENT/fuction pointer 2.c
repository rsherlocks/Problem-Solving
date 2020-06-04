#include<stdio.h>
int main()
{
    int x=5,*ptr;
    ptr=&x;
    *ptr=12;
    printf("ptr=%d\n",*ptr);
    printf("x=%d\n",x);
    *ptr+=7;
    printf("%d\n",*ptr);
    printf("%d\n",x);
    *(ptr++);
    printf("%d\n",*ptr);
    printf("%d\n",x);

    return 0;

}
