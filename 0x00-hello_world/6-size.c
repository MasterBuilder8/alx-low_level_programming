#include <stdio.h>
/**
 * main-Print out sizes of data types in c
 *
 * Return: 0
*/
int main(void)
{

	printf("Size of a char: %zu byte(S)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu byte(S)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu byte(S)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %zu byte(S)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %zu byte(S)\n", (unsigned long)sizeof(float));
	return (0);
}




