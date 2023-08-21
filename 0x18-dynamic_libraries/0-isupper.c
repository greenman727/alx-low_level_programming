#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: the character to check
 *
 * Return: 1 if successful, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
