#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string to be concatenated to @s1
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	int i, s1size, S2size, len;

	i = 0;
	s1size = 0;
	s2size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1size))
		s1size++;
	while (*(s2 + s2size))
		s2size++;

	len = s1size + s2size;
	constr = (char *)malloc(sizeof(char) * (len + 1));
	if (constr == NULL)
		return (NULL);

	for (i = 0; i < s1size; i++)
		*(constr + i) = *(s1 + i);
	for (i = s1size; i < (s1size + s2size); i++)
		*(constr + i) = *(s2 + i - s1size);

	return (constr);
}
