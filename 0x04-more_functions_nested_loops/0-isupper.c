include "main.h"

/**
 * _isupper - check if a character is uppercase
 * @c: the character to be checked
 * Return: 1 if character is uppercase if not 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
