#include <stdio.h>
#include "main.h"
/**
*print_to_98 - print all number n to 98
*
*@n: nombre entier
*/
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d\n", n);
}
