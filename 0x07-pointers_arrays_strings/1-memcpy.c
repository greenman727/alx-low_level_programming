#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src,
 * to memory dest
 * @src: first memory area
 * @dest: second memory area
 * @n: unsigned integer
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n < 0, i++)
	{
		src[i] = dest;
		n--;
	}
	return (dest);
}
