#include "main.h"
/**
*puts_half - a function that prints half of a string
*@str: string of character
*/
void puts_half(char *str)
{
int length = 0;
int n;
for (; str[length] != '\0'; length++)
{
}
for (n = (length + 1) / 2; length > n; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
