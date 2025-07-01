#include "main.h"
int square(int i, int number);

/**
*_sqrt_recursion - return the value of x to the power of y
*@n: integer
*Return: squarred root N
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (square(n, 0));
}

/**
*square - calculate the square
*@i: integer
*@number: integer
*Return: number (sum of i x i)
*/
int square(int number, int i)
{
if (i * i > number)
return (-1);
if (i * i == number)
return (i);
return (square(number, i + 1));
}
