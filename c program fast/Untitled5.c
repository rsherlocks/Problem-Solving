#include<stdio.h>

int main()

{
    char n;

    scanf("%c",&n);
    switch(n)
    {
        case 'a' :

        printf("allion\n");
        break;

        case'b' :
        case'c':

            printf("book\ncat");
        case'd':
            printf("doll\n");
            break;
        case'e':
            printf("egg\n");
            break;
        default:
            printf("wrong");
    }
    return 0;
}
