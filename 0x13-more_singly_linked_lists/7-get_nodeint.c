#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 *
 * @head: the pointer of first node
 * @index: the index of the node, starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
