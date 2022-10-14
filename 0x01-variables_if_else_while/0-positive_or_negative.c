#include <stdlib.h>
#include <time.h>
/**
 * main - Serves as the entry point for the program
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	if (n == o)
		printf("is zero");
	if (n < 0)
		printf("is negative);
	return (0);
}
