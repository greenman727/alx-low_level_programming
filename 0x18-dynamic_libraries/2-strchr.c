#include"main.h"
#include <stdio.h>

/**
 *_strchr - locate the first occurence of char in string and returns pointer.
 *@s: string
 *@c: the character
 *Return: a pointer to the character in the sring
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0' && s[a] != c)
		a++;

	if (s[a] == c)
		return (&s[a]);
	else
		return (NULL);
}
