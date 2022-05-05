
/* WAP to convert decimal number into binary*/
#include <stdio.h>
int main ()
{
    int decimal, rem, weight=1, binary=0;
    printf ("Enter a Decimal number\n");
    scanf ("%d",&decimal);

    while ( decimal !=0)
    {
        rem = decimal %2;
        decimal = decimal/2;
        binary = binary + weight * rem;
        weight = weight *10;


    }
    printf ("The decimal equivalent is  %d",  binary);
    return 0;
}