#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;
	return (b);
}
