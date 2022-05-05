/* WAP to find the multiplication of a number entered by the user */
#include <stdio.h>
int main ()
{
    int n, i;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    for ( i = 1 ; i <=10; i++)
    {
        printf ( "%d * %d = %d\n", n, i, n*i);
    }
    printf ("\n");
    return 0;
}