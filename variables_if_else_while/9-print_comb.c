#include <stdio.h>
/**
* main - all possible combinations of single-digit numbers
*
* Return: always 0 success
*/
int main(void)
{
int a = 0;
while (a < 10)
{
putchar (a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
