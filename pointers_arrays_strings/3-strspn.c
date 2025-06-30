#include "main.h"
/**
*_strspn - calculates the length (in bytes)
*of the initial segment of s
*@s: initial segment
*@accept: bytes
*Return: The length in Bytes
*/
unsigned int _strspn(char *s, char *accept)
{
int i, length, j;
length = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
length++;
break;
}
}
if (s[i] != accept[j])
{
return (length);
}
}
return (length);
}
