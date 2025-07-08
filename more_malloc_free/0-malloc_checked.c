#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - check the malloc function
*@b: unsigned int
*Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *mallocfunction = malloc(b);
if (mallocfunction == NULL)
exit(98);
return (mallocfunction);
}
