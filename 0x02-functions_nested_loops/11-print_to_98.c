#include "main.h"

/**
 * print_to_98 - print natural numbers to 98.
 * @n: checks for input
 */
void print_to_98(int n)
{
	int in;

	if (n > 98)
		for (in = n; in > 98; in--)
			printf("%d, ", in);
	else
		for (in = n; in < 98; in++)
			printf("%d, ", in);
	printf("98\n");
}
