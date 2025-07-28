#include "lists.h"
/**
*add_node - adding a new node at the beginning (Head)
*@head: Double pointer to the head
*@str: pointer to a string
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
		dup_str = strdup(str);
		if (dup_str == NULL)
			{
			free(new_node);
			return (NULL);
			}

	new_node->str = dup_str;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

return (new_node);
}
