#include "main.h"
/**
*string_toupper - swith lowercase in uppercase in an array
*
*@str: string
*Return: styring to upper
*/
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}
