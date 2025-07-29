#include "lists.h"
/**
* delete_dnodeint_at_index - delete an index in a double linked list
* @head: double pointer on the head of the list
* @index: index of node to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;

if (head == NULL || *head == NULL)
{
	return (-1);
}

if (index == 0)
{
	temp = *head;
	*head = (*head)->next;
if (*head != NULL)
{
	(*head)->prev = NULL;
}
free(temp);
	return (1);
}
temp = *head;
while (temp != NULL && i < index)
{
	temp = temp->next;
	i++;
}
if (temp == NULL)
{
	return (-1);
}
if (temp->prev != NULL)
{
	temp->prev->next = temp->next;
}
if (temp->next != NULL)
{
	temp->next->prev = temp->prev;
}
free(temp);
return (1);
}
