#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unisgned long int i = 0;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);

	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);

}
