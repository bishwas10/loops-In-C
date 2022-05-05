/* WAP to find whether the number is prime or composite using break statement */
#include <stdio.h>
int main ()
{
    int n, i;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    for ( i = 2 ; i <n;i++)
    {
        if ( n % i ==0)
        break;
    }
    if ( n == i)
    printf ("It is a Prime number\n");
    else
    printf ("It is a composite number \n");

    return 0;
}