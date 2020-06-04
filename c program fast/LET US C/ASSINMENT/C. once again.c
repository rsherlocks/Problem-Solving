#include <stdio.h>
int main()
{
    int x, y;
    double d;
    char ch;
    scanf("%d%d", &x, &y);
    scanf("%lf", &d);
    getchar();
    scanf("%c", &ch);
    printf("%d %d\n", x, y);
    printf("%0.2lf\n", d);
    printf("%c\n", ch);
    return 0;
}

