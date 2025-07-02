#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - check the code
*@argc: argument counter
*@argv: argument array value
*Return: always 0 access
*/
int main(int argc, char *argv[])
{
int n, i, result = 1;
if (argc > 1)
{
for (n = 1; n < argc; n++)
{
i = atoi(argv[n]);
result = result * i;
}
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
}
return (1);
}
