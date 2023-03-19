#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to the head of the node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		dlistint_t *tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	dlistint_t *current = *head;

	for (unsigned int i = 0; current != NULL && i < index; i++)

	{
		current = currrent->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
