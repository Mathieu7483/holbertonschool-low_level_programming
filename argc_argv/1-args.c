#include <stdio.h>
#include "main.h"
/**
*main - check the code
*@argc: argument counter
*@argv: argument array value
*Return: always 0 access
*/
int main(int argc, char *argv[])
{
(void) *argv;
printf("%d\n", argc - 1);
return (0);
}
