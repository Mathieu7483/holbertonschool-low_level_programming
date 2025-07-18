#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - Prints all arguments based on the format string.
* @format: A list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
va_list allargs;
unsigned int i = 0;
char *separator = "";
char *str_val;
va_start(allargs, format);
if (format == NULL)
{
printf("\n");
va_end(allargs);
return;
}
while (format[i] != '\0')
{
if (format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f' || format[i] == 's')
{
printf("%s", separator);
separator = ", ";
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(allargs, int));
break;
case 'i':
printf("%d", va_arg(allargs, int));
break;
case 'f':
printf("%f", va_arg(allargs, double));
break;
case 's':
str_val = va_arg(allargs, char *);
if (str_val == NULL)
str_val = "(nil)";
printf("%s", str_val);
break; }
i++;
}
va_end(allargs);
printf("\n");
}
