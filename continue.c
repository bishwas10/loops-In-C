    
/* WAP to find whether the number is prime or composite using continue statement */
#include <stdio.h>
int main ()
{
    int n, i;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    for ( i = 2 ; i <n;i++)
    {
        if ( n % i!=0)
        continue;
        printf ("It is a composite number \n");
        exit (1);
    }
    printf ("It is a prime number \n");

    return 0;
}