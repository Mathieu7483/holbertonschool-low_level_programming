#include "main.h"
#include <stdlib>
/**
*create_array - create an array
*@size: taille du tableau
*@c: caractere
*Return: NULL if size = 0
*a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *pointerarray;
unsigned int i;
pointerarray = malloc(sizeof(char) * size);
if (size == 0 || pointerarray == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
pointerarray[i] = c;
}
return (pointerarray);
}
