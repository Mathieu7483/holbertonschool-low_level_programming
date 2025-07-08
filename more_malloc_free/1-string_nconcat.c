#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatenate string
*@s1: String one
*@s2: String two
*@n: integer unsigned
*Return: pointer to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int length, longueurs2 = 0, longueurs1 = 0, i, j;
if (s1 == NULL)
{ s1 = ""; }
if (s2 == NULL)
{ s2 = ""; }
for (i = 0; s1[i] != '\0'; i++)
{ longueurs1++; }
for (i = 0; s2[i] != '\0'; i++)
{ longueurs2++; }
if (n >= longueurs2)
{ length = longueurs1 + longueurs2 + 1; }
else
{ length = longueurs1 + n + 1; }
ptr = malloc(sizeof(char) * length);
if (ptr == NULL)
{ return (NULL); }
for (i = 0; i < longueurs1; i++)
{ ptr[i] = s1[i]; }
for (j = 0; j < n && s2[j] != '\0'; j++)
{ ptr[i + j] = s2[j]; }
ptr[i + j] = '\0';
return (ptr);
}
