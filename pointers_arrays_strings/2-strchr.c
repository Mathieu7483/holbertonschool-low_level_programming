#include "main.h"
/**
*_strchr - search a char in a string
*@s: input
*@c: input
*Return: Always 0 success
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (0);
}
return ('\0');
}
