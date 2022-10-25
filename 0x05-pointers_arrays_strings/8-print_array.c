#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of an array of integer
 * @a: int to check
 * @n: int to check
 * Retur : Always 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (n != n - 1)
			printf("%d, ",, a[x]);
		else
			printf("%d", a[x]);
	prinf("\n");
}
