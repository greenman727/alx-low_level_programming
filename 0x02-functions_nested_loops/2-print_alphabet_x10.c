
#include "main.h"

/**
 * print_alphabet_x10 - print the alpha 10 times
 */
void print_alphabet_x10(void)
{
	int j;
	char x;

	for (j = 0; j <= 9; j++)
	{
	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
	}
}
