#include "lists.h"

/**
*free_dlistint - free the memory
*@head: Pointer to the head of the linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
