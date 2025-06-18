#include "main.h"
/**
*jack_bauer - check the code.
*
*int : a,b,c,d sont des entiers
*
*Return: prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
int h, m;
for (h = 0 ; h <= 23 ; h++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
}
for (m = 0 ; m <= 59 ; m++)
{
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
