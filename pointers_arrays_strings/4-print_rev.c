#include "main.h"
/**
* print_rev - print a string in reverse
*@s: string of character
*/
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
 _putchar('\n'); 
}
