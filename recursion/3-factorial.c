#include "main.h"
/**
*factorial - multiplicate n times
*@n: Integer
*Return: Sum of factorial
*/
int factorial(int n)
{
if (n < 0)
{
return(-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
