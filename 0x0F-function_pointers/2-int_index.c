#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @array: the array where number is checked
 * @size: the number of elements in the @array
 * @cmp:  a pointer to the function to be used to compare values
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
