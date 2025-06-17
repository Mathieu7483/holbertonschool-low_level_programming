#include "main.h"
/**
* print_alphabet_x10 - entry point of the code
* Return: always 0 success
*/
void print_alphabet_x10(void)
{
char a;
int i = 0;
while (i <= 9)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
i++;
}
}
