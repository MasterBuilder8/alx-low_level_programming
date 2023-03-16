#include "lists.h"

/**
 * get_dnodeint_at_index - prints the nth node of a dlistint_t linked list
 * @head: pointer to the head of the node
 * @index: the index of node to return
 * Return: nth node or NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int x = 0;

	while (temp != NULL)
	{
		if (x == index)
		{
			return (temp);
		}
		temp = temp->next;
		x++;
	}

	return (NULL);
}
