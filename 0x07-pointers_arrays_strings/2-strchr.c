#include "main.h"

/**
 * _strchr - locate a character in a string
 * @c: character to be tested
 * @s: the string
 * Return: the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
