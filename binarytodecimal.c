/* WAP to convert binary number into decimal*/
#include <stdio.h>
int main ()
{
    int binary, rem, weight=1, decimal=0;
    printf ("Enter a binary number\n");
    scanf ("%d",&binary);

    while ( binary !=0)
    {
        rem = binary %10;
        decimal = decimal + weight * rem;
        binary = binary/10;
        weight = weight *2;


    }
    printf ("The decimal equivalent is  %d",  decimal);
    return 0;
}