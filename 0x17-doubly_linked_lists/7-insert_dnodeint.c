#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: pointer to the hed of the node
 * @idx: the index of the list where the new node should be added
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int x = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		if (current_node == NULL)
			return (NULL);

		current_node = current_node->next;
		x++;
	}

	if (current_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
