#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 is s1 and s2 are equals,
 * another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; s[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
