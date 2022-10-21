#include "main.h"

/**
 * print_diagonal - draws a siagonal line
 * @n: number of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, int y;
	if (n <= 0)
		_putchar('\');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
