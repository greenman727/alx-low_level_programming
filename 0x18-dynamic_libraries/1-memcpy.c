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
	int size = n;

	if (size > 0)
	{
		int i;
		
		for (i =0, i < size; i++;)
			src[i] = dest[i];
	}
	return (dest);
}
