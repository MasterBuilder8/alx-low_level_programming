#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the character to be checked
 * Return: 0
 */
void print_rev(char *s)
{
	int a, b;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
