#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers
*@separator: the string to be printed between numbers
*@n: integer to display
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
if (n > 0)
{
va_start(args, n);
while (i < n)
{
printf("%d", va_arg(args, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
va_end(args);
}
printf("\n");
}
