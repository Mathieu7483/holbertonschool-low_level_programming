#include "main.h"
/**
*_strlen_recursion - function that return
*length of a string
*@s: string
*Return: Length of the string
*/
int _strlen_recursion(char *s)
{
int length = 0;
if (*s != '\0')
{
length++;
length = length + _strlen_recursion(s + 1);
}
return (length);
}
