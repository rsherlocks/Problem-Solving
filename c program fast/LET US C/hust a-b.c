#include<stdio.h>
    int main()
    {
    char key;
    key=getchar();
    switch(key)
    {
    case 'a':
        add();
        break;
    case 's':
        sub();
        break;
    case 'm':
        mul();
        break;
    case 'd':
        div();
        break;
    }
    return 0;
    }
    void add()
    {
        int a,b,sum;
        scanf("%d%d",&a,&b);
        sum=(a+b);
        printf("sum=%d\n",sum);
        char key;
        scanf("%d",&key);
        //key=getchar();
        if(key=='y')
        {
            main();

        }
        main();

    }
    void sub()
    {
        int a,b,sum;
        scanf("%d%d",&a,&b);
        sum=(a-b);
        printf("sum=%d\n",sum);
        char key;
        scanf("%d",&key);
        //key=getchar();
        if(key=='y')
        {
            main();

        }
        main();
    }
    void mul()
    {
        int a,b,sum;
        scanf("%d%d",&a,&b);
        sum=(a*b);
        printf("sum=%d\n",sum);
        char key;
        scanf("%d",&key);
        //key=getchar();
        if(key=='y')
        {
            main();

        }
        main();
    }
    void div()
    {
        int a,b,sum;
        scanf("%d%d",&a,&b);
        sum=(a/b);
        printf("sum=%d\n",sum);
        char key;
        scanf("%d",&key);
        //key=getchar();
        if(key==1)
        {
            main();

        }
        main();
    }
