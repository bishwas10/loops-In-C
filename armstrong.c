#include <stdio.h>
int main ()
{
    int n , r, m, rev = 0;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    m = n;
    while ( n >0)
    {
        r = n %10;
        rev = rev+ r*r*r;
         n = n/10;
    }
    if ( m ==rev)
    {
        printf ("The number is Armstrong Number \n");
    }
    else
    {
        printf ("The number is not Armstrong number \n");
    }
    return 0;
}