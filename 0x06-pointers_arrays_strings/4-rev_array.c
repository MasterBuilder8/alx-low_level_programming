#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int s, c;

for (s = 0; (s < (n - 1) / 2); s++)
	{
	c = a[s];
	a[s] = a[n - 1 - s];
	a[n - 1 - s] = c;
	}
}
