#include "main.h"
/**
*print_last_digit - check the code.
*
*@n : n est un nombre
*
*Return: the last digit of a number
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar (last + '0');
return (last);
}
