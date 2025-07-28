#include "lists.h"

/**
*free_list - Libère toute la mémoire d'une liste chaînée
*@head: Pointeur vers le début de la liste
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
