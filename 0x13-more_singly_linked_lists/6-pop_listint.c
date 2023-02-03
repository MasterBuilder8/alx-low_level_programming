#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list
 *
 * @head: the node to be deleted
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int n = 0;

	if (*head != NULL)
	{
		delete = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = delete;
	}

	return (n);
}
