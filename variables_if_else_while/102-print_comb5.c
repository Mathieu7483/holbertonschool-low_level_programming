#include <stdio.h>
/**
*main - prints two pairs of two-digit numbers
*Return: 0
*/
int main(void)
{
int number1, number2;
for (number1 = 0; number1 < 99; number1++)
{
for (number2 = 0 ; number2 <= 99 ; number2++)
{
putchar((number1 / 10) + '0');
putchar((number1 % 10) + '0');
putchar(' ');
putchar((number2 / 10) + '0');
putchar((number2 % 10) + '0');
if (number1 == 98 && number2 == 99)
continue;
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
