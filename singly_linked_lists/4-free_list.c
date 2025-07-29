#include "lists.h"

/**
*free_list - Free all the memory
*@head: Pointer to the head of a linked list
*/
void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
