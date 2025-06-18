#include "main.h"
/**
*times_table - check the code.
*
*int : lignes et colonnes
*/
void times_table(void)
{
int col, li, p;
for (col = 0 ; col <= 9; col++)
{
_putchar('0');
for (li = 0 ; li <= 9; li++)
{
p = col * li;
_putchar(',');
_putchar(' ');
if (p < 10)
_putchar(' ');
else
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
}
_putchar('\n');
}
}
