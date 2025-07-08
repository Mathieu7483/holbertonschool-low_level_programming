#include "main.h"
#include <stdlib.h>
/**
*array_range - create an array
*@min: minimum value of array
*@max: maximum value of array
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *ptr;
int res, i;
if (min > max)
{
return (NULL);
}
res = max - min + 1;
ptr = malloc(sizeof(int) * res);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < res; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
