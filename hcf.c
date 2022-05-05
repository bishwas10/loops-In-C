/* WAP to find the HCF of two number */
#include <stdio.h>
int main ()
{
    int m, n;
    printf ("Enter two numbers \n");
    scanf ("%d %d",&m,&n);
    while ( m !=n)
    {
        if ( m > n)
        {
            m = m-n;
        }
        else
        {
            n = n-m;
        }
    }
    printf ("The H.C.F between two number is %d\n", m);
    return 0;
}