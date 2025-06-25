#include "main.h"
/**
*_strcat - concatenates two strings
*
*@dest: destination
*@src: source
*Return: SrcDest
*/
char *_strcat(char *dest, char *src)
{
int i, l = 0;
for (i = 0; dest[i] != '\0'; i++)
{
l++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
} 
return (dest);
}
