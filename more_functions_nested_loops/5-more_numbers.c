#include "main.h"
/**
* more_numbers - entry point of the code
* Return: always 0 success
*/

void more_numbers(void)
{
int a;
int i = 0;
while (i <= 9)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
_putchar('\n');
i++;
}
}
