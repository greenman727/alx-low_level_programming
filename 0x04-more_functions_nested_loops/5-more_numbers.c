#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, ten times
 *
 * Return: no return
 */
void more_numbers(void)
{
	int a, num;

	for (a = 1; a <= 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
				_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
