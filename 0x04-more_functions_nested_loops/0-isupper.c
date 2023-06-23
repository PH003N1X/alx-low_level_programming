#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: function input
 *
 * Return: 1 if input is uppercase, 0 if else.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
