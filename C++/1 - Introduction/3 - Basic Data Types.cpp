// URL : https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include<stdio.h>

int main ()
{
        int     a;
        long    b;
        char    c;
        float   d;
        double  e;

    // Input is being taken using scanf and not cin. This is because in one of the test 
    // cases the given input is larger than the size of the datatype. cin in that case
    // sets the error flag whcih stops further inputs to be taken. scanf, however, works.
    scanf ("%d\n",    &a);
    scanf ("%ld\n",   &b);
    scanf ("%c\n",    &c);
    scanf ("%f\n",    &d);
    scanf ("%lf\n",   &e);
    

    printf ("%d\n",   a);
    printf ("%ld\n",  b);
    printf ("%c\n",   c);
    printf ("%f\n",   d);
    printf ("%lf\n",  e);

    return 0;
}