#include "main.h"
#include <stdlib.h>
/**
*_strdup - duplicate a string
*@str: string to duplicate
*Return: Returns NULL if string = NULL
*On success, the _strdup function returns a pointer
*to the duplicated string. It returns NULL
*if insufficient memory was available
*/
char *_strdup(char *str)
{
char *a;
int i;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{}
a = malloc(sizeof(char) * (i + 1));
if (a == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
a[i] = str[i];
}
a[i] = '\0';
return (a);
}
