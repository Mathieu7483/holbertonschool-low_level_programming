#include "main.h"
/**
*_pow_recursion - return the value of x to the power of y
*@x: integer
*@y: integer
*Return: X power Y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
