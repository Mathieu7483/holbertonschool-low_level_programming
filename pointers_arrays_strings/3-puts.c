#include "main.h"
/**
*_puts - print the length of a string
*@str: string of character
*/
void _puts(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
for (; *str != '\0'; str++)
_putchar(*str);
_putchar('\n');
}
