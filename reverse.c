/*WAP to find the reverse of the number */
#include <stdio.h>
int main ()
{
    int n , r, rev = 0;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    while ( n>0)
    {
        r = n %10;
        rev = rev *10+r;
        n = n /10;
    }
   printf ("The reverse of %d is %d", n , rev);
   return 0;
}