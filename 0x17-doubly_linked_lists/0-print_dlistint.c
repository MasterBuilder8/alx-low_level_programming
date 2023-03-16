#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of doubly linked list
 *
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		count++;
		current_node = current_node->next;
	}

	return (count);
}
