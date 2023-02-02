#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: header of the linked list
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
