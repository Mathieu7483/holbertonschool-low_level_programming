#include "main.h"
#include <stdio.h>
/**
*print_line - print n times '_'
*
*@n: integer
*
*/
void print_line(int n)
{
int c;
c = 0;
while (c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
