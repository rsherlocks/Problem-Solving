#include <stdio.h>
int main()
{
    int a, b;
    double d;
    char ch;
    scanf("%d%d", &a, &b);
    scanf("%lf", &d);
    getchar();
    scanf("%c", &ch);
    printf("%d %d\n", a, b);
    printf("%0.2lf\n", d);
    printf("%c\n", ch);
    return 0;
}
