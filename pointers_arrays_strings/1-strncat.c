#include "main.h"
/**
*_strncat - concatenates two strings
*without null bytes
*
*@dest: destination
*@src: source
*@n: integer
*Return: Dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, l = 0;
for (i = 0; dest[i] != '\0'; i++)
{
l++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}
return (dest);
}
