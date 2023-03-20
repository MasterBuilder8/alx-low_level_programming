#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: the pointed memory
 * @b: the constant byte
 * @n: bytes of the memory area pointed to by @s
 * Return:  a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);

}
