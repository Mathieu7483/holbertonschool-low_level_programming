#include "main.h"
#include <stdlib.h>
/**
*_calloc - malloc with init at 0
*@nmemb: integer
*@size: size of the array
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int res, i;
if (nmemb == 0 || size == 0)
return (NULL);
res = nmemb * size;
a = malloc(res);
if (a == NULL)
return (NULL);
for (i = 0; i < res ; i++)
a[i] = 0;
return (a);
}
