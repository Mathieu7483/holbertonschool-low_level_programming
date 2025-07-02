#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*main - check the code
*@argc: argument counter
*@argv: argument array value
*Return: always 0 access
*/
int main(int argc, char *argv[])
{
int i, n, sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (n = 0; argv[i][n]; n++)
{
if (!isdigit(argv[i][n]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
