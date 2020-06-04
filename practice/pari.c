#include <stdio.h>
int main()
{
    int mark;
    printf ("\n Ente ryour mark \n");
    scanf ("%d",&mark);

    if (mark>100)
    {
        printf ("Number is invalid \n");
    }
    else if (mark>=80 && mark<100)
    {
        printf ("Grade is A+ \n");
    }
    else if (mark>=70 && mark<80)
    {
        printf ("Grade is A \n");
    }
    else if (mark>=60 && mark<70)
    {
        printf ("Grade is B\n");
    }
    else if (mark>=50 && mark<60)
    {
        printf (" Grade is C \n");
    }
    else if (mark>=40 && mark<50)
    {
        printf ("Grade is D \n");

    }
    else if (mark>=35 && mark<40)
    {
        printf ("Grade is E \n");
    }
    else
    {
        printf ("Grade is F \n");
    }
    return 0;
}
