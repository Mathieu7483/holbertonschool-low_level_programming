#include "main.h"
/**
* print_sign - entry point of the code
* @n: sign to check
* Return: 1 if + 0 ifzero -1 if -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
