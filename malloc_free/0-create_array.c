#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - create an array
*@size: size of array
*@c: char
*Return: Returns NULL if size = 0
*or a pointer to the array, or NULL if it fails
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
