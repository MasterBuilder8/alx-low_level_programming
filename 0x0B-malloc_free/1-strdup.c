#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 *
 * Return:  a pointer to the duplicated string, NULL if it fails
 */
char *_strdup(char *str)
{
	char *copystr;
	int i, strSize = 0;

	if (str == 0)
		return (NULL);
	while (*(str + strSize))
		strSize++;

	copystr = malloc((strSize) * sizeof(char));
	if (copystr == NULL)
		return (0);
	for (i = 0; i < (strSize); i++)
		*(copystr + i) = *(str + i);
	return (copystr);
}
