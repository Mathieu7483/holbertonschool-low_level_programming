#include "main.h"
/**
*_strcmp - compare the string
*@s1: source tab
*@s2: dest tab
*Return: value of comp
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2 && *s1 != '\0')
++s1, ++s2;
return (*s1 - *s2);
}
