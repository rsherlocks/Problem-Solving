#include<stdio.h>
void add();
void sub();
int main()
{
    char key;
    key=getchar();
    switch(key)
    {
    case 'a':
        add();
        break;
    case 'b':
        sub();
        break;

    }

    return 0;
}
void add()
{
    int a,b,sum,ch;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    //gets(str);
    scanf("%d",&ch);
   if(ch==1)
   {
       main();
   }
   main();
}
void sub()
{
    int a,b,sum2,ch;
    scanf("%d%d",&a,&b);
    sum2=(a-b);
    printf("sum=%d\n",sum2);
    scanf("%d",&ch);
    if(ch==1)
   {
       main();
   }
   main();
}
