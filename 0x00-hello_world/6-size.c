#include <stdio.h>
/**
 * main-Print out sizes of data types in c
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeofa(a));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeofa(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeofa(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeofa(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeofa(e));
	return (0);
}




