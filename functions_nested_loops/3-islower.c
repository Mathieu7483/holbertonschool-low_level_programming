#include "main.h"
/**
* _islower - entry point of the code
* @c: character to check
* Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
