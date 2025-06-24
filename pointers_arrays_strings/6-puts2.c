#include "main.h"
/**
* puts2 - print a string
*@str: void puts 2
*/
void puts2(char *str)
{
int i = 0;
if (*str == '\0')
{
_putchar('\n');
return;
}
for (; *str != '\0'; str++)
if (i % 2 == 0)
_putchar(*str);
_putchar('\n');
}
