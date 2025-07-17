#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - main
* @argc: arguments counter
* @argv: arguments vector
*
* Return: operations
*/
int main(int argc, char *argv[])
{
int a, b, result;
int (*oprt)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
oprt = get_op_func(argv[2]);
if (oprt == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
result = oprt(a, b);
printf("%d\n", result);
return (0);
}
