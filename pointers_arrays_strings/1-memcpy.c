#include "main.h"
/**
*_memcpy - copy a memory zone
*@dest: destination
*@src: source
*@n: integer
*
*Return: pointer to the memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[i] = src[i];

for ( ; i < n ; i++)
dest[i] = '\0';
return (dest);
}
