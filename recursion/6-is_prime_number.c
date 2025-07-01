#include "main.h"
int check_prime(int n, int i);
/**
*is_prime_number - check if n is prime number
*@n: number to evaluate
*Return: 1 if okay, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (check_prime(n, 2));
}

/**
*check_prime - check recursive of a number
*@i: iterator
*@n: number to evaluate
*Return: 1 if prime, 0 if not
*/
int check_prime(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0)
return (0);
else
return (check_prime(n, i + 1));
}
