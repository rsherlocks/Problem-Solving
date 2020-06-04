#include<stdio.h>
int main()
{
    int price;
    printf("you chose 2 package\n 1st package=150\n 2nd package=100\n\n\n");
    printf("enter total price=");
    scanf("%d",&price);
    switch(price)
    {
        case 150:
        printf("\n gorur tahary full plate=120\n\n");
        printf("doi=20\n\n");
        printf("khurma and fruit=10\n");
        break;
        case 100:
            printf("\n gorur tahary half plate=70\n\n");
            printf("pran mango juice=15\n\n");
            printf("khurma and fruit=15\n\n");
            break;
        default:
            printf("no more pacakge");

    }
    return 0;
}
