#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i;
	int j = 0;
	
	while (s(j) != '\0')
		j++;
	
	for (j = j - 1; j >= 1; j --)
		_putchar(s[i]);
	_putchar('\n');
}
