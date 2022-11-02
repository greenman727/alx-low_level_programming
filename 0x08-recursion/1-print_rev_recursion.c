#include "main.h"

/**
 * _printrtev_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(*s);
	}
	_putchar('\n');
}
