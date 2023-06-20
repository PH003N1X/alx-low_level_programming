#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: checks for function input
 *
 * Return: Always n success
 *         n * -1 if the number is negative.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
