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
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
