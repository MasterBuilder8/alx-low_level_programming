#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the head of the node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tail;

	while (head != NULL)
	{
		tail = head;
		head = head->next;
		free(tail);
	}
}
