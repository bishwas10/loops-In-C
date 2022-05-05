/* WAP to find whether number is Palindrome or not */
#include <stdio.h>
int main ()
{
    int n , r, rev = 0,m;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    m = n;
    while ( n>0)
    {
        r = n %10;
        rev = rev *10+r;
        n = n /10;
    }
    if ( rev == m)
    {
        printf ("The number is Palindrome\n");
    }
    else
    {
        printf ("The number  is not Palindrome \n");
    }
    return 0;
}