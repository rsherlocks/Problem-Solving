#include<stdio.h>
struct stu
{
    char name[20];
    char id[20];
    float cgpa;

};
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
   struct stu d;
   scanf("%s",d.name);
   scanf(" %s",d.id);
   scanf("%f",&d.cgpa);
    printf("%s\n",d.name);
    printf("%s\n",d.id);
    printf("%.2f\n",d.cgpa);
    }
    return 0;
}
