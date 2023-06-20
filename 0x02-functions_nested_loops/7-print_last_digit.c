#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: checks for function input
 *
 * Return: last, return the last digit of the number
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = (n % 10) * -1;
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}
