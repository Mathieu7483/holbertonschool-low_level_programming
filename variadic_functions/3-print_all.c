#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_all - print all the arguments
*@format: format of the arguments
*/
void print_all(const char * const format, ...)
{
va_list allargs;
unsigned int i = 0;
char *separator = "";
char char_val;
int int_val;
float float_val;
char *str_val;
va_start(allargs, format);
if (format == NULL)
{
printf("\n");
va_end(allargs);
return; }
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s", separator);
char_val = va_arg(allargs, int);
printf("%c", char_val);
separator = ", ";
break;
case 'i':
printf("%s", separator);
int_val = va_arg(allargs, int);
printf("%d", int_val);
separator = ", ";
break;
case 'f':
printf("%s", separator);
float_val = va_arg(allargs, double);
printf("%f", float_val);
separator = ", ";
break;
case 's':
printf("%s", separator);
str_val = va_arg(allargs, char *);
if (str_val == NULL)
{str_val = "(nil)"; }
printf("%s", str_val);
separator = ", ";
break;
default:
break; }
i++;
}
va_end(allargs);
printf("\n");
}
