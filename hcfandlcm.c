/* WAP to find the HCF and LCM of two number*/
#include <stdio.h>
int main ()
{
    int n1, n2 , i, hcf, lcm,min;
    printf ("Enter two number \n");
    scanf ("%d %d", &n1,&n2);
    min = (n1 <n2) ? n1 : n2;
    for ( i = 1 ; i <= min ; i++)
    {
        if ( n1 % i ==0 && n2 % i ==0)
        {
            hcf = i;
        }
    }
    lcm = (n1*n2)/hcf;
    printf ("The HCF is %d\n", hcf);
    printf ("The LCM is %d\n", lcm);
    return 0;
}