#include "main.h"
/**
*_strlen - calculate the length of a string
*@s: string of character
* Return: Length of a string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length])
{
length++;
}
return (length);
}
