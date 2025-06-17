#include "main.h"
/**
* _isalpha - entry point of the code
* @c: character to check
* Return: 1 if c is lowercase otherwise 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if
(c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
