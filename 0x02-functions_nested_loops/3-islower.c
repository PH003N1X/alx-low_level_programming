#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 *
 * @c: checks input of the function _islower
 *
 * Return: 1 if the letter is in lowercase
 *         0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
