#include<stdio.h>
int add()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}
int sub()
{
     int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a-b);
}
int main()
{
    int a;
    scanf("%d\n",&a);
    while(a!=1)
    {
        add();
        sub();
        scanf("%d",&a);
    }
    return 0;
}
