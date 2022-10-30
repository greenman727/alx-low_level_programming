#include "main.h"

/**
 * swap_int - swap integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
