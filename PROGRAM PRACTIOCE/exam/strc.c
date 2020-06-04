#include<stdio.h>
struct stu{
    char name[50];
    char id[50];
    char sec;
};
int main(){
    struct stu{
    char name[50];
    char id[50];
    char sec;
};
    struct stu d[3];
    int i;
    for(i=1;i<=3;i++)
    {
    scanf("%s",&d[i].name);
    scanf(" %s",&d[i].id);
    scanf("%c",&d[i].sec);
    printf("%s\n",d[i].name);
    printf("%s\n",d[i].id);
    printf("%c\n",d[i].sec);
    }
    return 0;
}
