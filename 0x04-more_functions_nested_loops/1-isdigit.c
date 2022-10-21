#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: - the character to be checked
 * Return: 1 if character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int y = 0;
	
	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}


	
