#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: the string to be checked
 * Return: 0
 */
void puts2(char *str)
{
	int world;

	for (world = 0; str[world] != '\0'; world++)
		if (world % 2 == 0)
			_putchar(str[world]);
	_putchar('\n');
}
