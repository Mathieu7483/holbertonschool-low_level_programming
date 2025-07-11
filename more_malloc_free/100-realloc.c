#include "main.h"
#include <stdlib.h>
/**
*_realloc - realocate a memory to a pointer
*@ptr: pointer
*@old_size: old size of the memory
*@new_size: new size of the memory
*Return: a pointer to a reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_block;
unsigned int i;
unsigned int copy_size;
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_block = malloc(new_size);
if (new_block == NULL)
{
return (NULL);
}
if (old_size < new_size)
{
copy_size = old_size;
}
else
{
copy_size = new_size;
}
for (i = 0; i < copy_size; i++)
{
*((char *)new_block + i) = *((char *)ptr + i);
}
free(ptr);
return (new_block);
}
