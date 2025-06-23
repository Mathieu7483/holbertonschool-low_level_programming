#include "main.h"
/**
* print_square - prints a square with #
*
* @size : size of the square
*/
void print_square(int size)
{
int line, column;
if (size > 0)
{
for (line = 0; line < size; line++)
{
for (column = 0; column < size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
