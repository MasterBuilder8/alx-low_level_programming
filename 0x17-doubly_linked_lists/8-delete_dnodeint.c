#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to the head of the node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	dlistint_t *current = *head;
	dlistint_t *prev = NULL;

	while (index > 0 && current != NULL)
	{
		prev = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
		*prev = current->next;
	else
		prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = prev;

	free(current);
	return (1);
}
