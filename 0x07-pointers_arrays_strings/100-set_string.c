#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 *
 * @s: pointer to be changed
 * @to: thecstring to change the pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
