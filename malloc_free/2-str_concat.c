#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*@s1: string one
*@s2: string two
*Return: NULL is passed, treat it as an empty string
*The function should return NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *res;
int i, j;
int longueurs1 = 0, longueurs2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
longueurs1++;
}
for (i = 0; s2[i] != '\0'; i++)
{
longueurs2++;
}
res = malloc(sizeof(char) * (longueurs1 + longueurs2 + 1));
if (res == NULL)
return (NULL);
for (i = 0; i < longueurs1; i++)
{
res[i] = s1[i];
}
for (j = 0; j < longueurs2; j++)
{
res[i + j] = s2[j];
}
res[longueurs1 + longueurs2] = '\0';

return (res);
}
