#include "main.h"
/**
*times_table - check the code.
*
*int : lignes et colonnes
*/
void times_table(void)
{
int col, li, p;
for (col = 1 ; col <= 9; col++)
{
_putchar('0');
for (li = 1 ; li <= 9; li++)
{
_putchar(',');
_putchar(' ');
p = col * li;
if (p < 10)
_putchar(' ');
else
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
}
_putchar('\n');
}
}
