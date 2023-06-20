#include "main.h"

/**
 * _isalpha - function checks for alphapetic character
 *
 * @c: checks for function input
 *
 * Return: 1 success
 *         0 another input
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
