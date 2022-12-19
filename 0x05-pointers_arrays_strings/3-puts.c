#include "main.h"

/**
 * _puts - print a string
 * @str: the string to be checked
 * Return: 0
 */
void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;

	}
	_putchar('\n');
}
