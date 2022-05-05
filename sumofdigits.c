/* WAP to find the sum of the digits */
#include <stdio.h>
int main ()
{
    int n , sum = 0,m, r;
    printf ("Enter the digits\n");
    scanf ("%d",&n);
    m = n;
    while ( n >0)
    {
        r = n %10;
        sum = sum +r;
        n = n /10;
    }
    printf ("The sum of %d is %d\n", m, sum);

    return 0;
}