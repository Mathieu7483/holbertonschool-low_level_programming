#include <stdlib.h>
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
if (n > 0)
{
va_start(args, n);
for (unsigned int i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
}
printf("\n");
}
