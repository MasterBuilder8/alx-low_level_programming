#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: the string to be searched
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b, c;

	for (b = 0; *(s + b); b++)
	{
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + b) == *(accept + c))
				break;
		}
		if (*(accept + c) == '\0')
			break;
	}
	return (c);
}
