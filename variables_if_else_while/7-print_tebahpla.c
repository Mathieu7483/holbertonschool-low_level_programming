#include <stdio.h>
/**
* main - Write a code to get alphabet reverse
* Return: always 0 success
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
