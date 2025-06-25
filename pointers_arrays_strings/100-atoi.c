#include "main.h"
/**
*_atoi - convert a string to an integer.
*@s: String
*Return: number in the string
*
*/
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;
int index;
for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == '-')
{
sign *= -1;
}
else if (s[index] >= '0' && s[index] <= '9')
{
num = (num * 10) + (s[index] - '0');
}
else if (num > 0)
{
break;
}
}
return (num *sign);
}
