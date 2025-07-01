#include "main.h"
/**
*_print_rev_recursion - put a string
*@s: string
*Return : end of recursion
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
