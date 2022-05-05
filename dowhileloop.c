#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    int i = 1;
    do
    {
        printf ("%d * %d = %d\n", n, i , n*i);
        i++;
        
    } while (i <=10);
    return 0;

}