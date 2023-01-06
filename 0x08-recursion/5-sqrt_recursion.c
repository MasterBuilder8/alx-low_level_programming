#include "main.h"

/**
 * check_root - check the square root
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int check_root(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check_root(x + 1, y));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_root(1, n));
}
