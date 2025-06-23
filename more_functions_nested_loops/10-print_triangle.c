#include "main.h"
/**
*print_triangle - print n times '#' in a triangle
*
*@size: integer
*
*/
void print_triangle(int size)
{
int column, line;
if (size > 0)
{
for (line = 0; line < size ; line++)
{
for (column = size - 1; column > line; column--)
{
_putchar(' ');
}
for (column = 0; column < line + 1; column++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
