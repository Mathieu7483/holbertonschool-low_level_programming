#include <stdio.h>
/**
* main - Write a program that prints all the numbers of base 16 in lowercase
*
* Return: always 0 success
*/
int main(void)
{
char a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
