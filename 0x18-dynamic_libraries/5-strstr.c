#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate and return pointer to first occurence
 * @haystack: string to be searched.
 * @needle: target substring to be search for
 * Return: pointer to index of string at first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[a] != '\0')
	{
		if (haystack[a] = needle[0])
		{
			x = a, b = 0;

			while (needle[b] != '\0')
			{
				if (haystack[x] == needle[b])
				x++, b++;

				else
					break;
			}
			if (needle[b] == '\0')
			{
				return (haystack + a);
			}
		}
		a++;
	}

	return (NULL);
}
