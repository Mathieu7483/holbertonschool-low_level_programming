#include "lists.h"
/**
*list_len - lenght of arguments of a list
*@h: pointer to the Head
*Return: Number of arguments
*/
size_t list_len(const list_t *h)

{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
