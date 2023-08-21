#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area,
 * pointed to by s with the constant byte b
 * @s: the memory area
 * @b: the character
 * @n: the unsigned integer
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
