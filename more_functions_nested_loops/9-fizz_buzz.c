#include <stdio.h>
/**
*main - print fizz for mul of 3 buzz for mul of 5
*            fizz buzz for both
*
*Return: always 0 access
*/
int main(void)
{
int n;
for (n = 1 ; n <= 100 ; n++)
{
if (n % 3  == 0 && n % 5 == 0)
printf("FizzBuzz");
else if (n % 3 == 0)
printf("Fizz");
else if (n % 5 == 0)
printf("Buzz");
else
printf("%d", n);
if (n < 100)
printf(" ");
}
printf("\n");
return (0);
}
