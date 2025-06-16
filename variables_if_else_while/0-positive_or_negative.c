#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the code
 * Return: always 0 success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d \n", n);
/* your code goes there */
return (0);
}
