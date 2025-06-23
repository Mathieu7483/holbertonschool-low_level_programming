#include "main.h"
#include <stdio.h>
/**
*print_diagonal - print n times '/' on diagonal
*
*@n: integer
*
*/
void print_diagonal(int n)
{
int c, l;
c = 0;
while (c < n)
{
for (l = 0 ; l < c ; l++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
c++;
}
if (n <= 0)
_putchar('\n');
}
