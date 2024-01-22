#include <stdio.h>

/**
 * _isdigit - checks the code for digit
 * @c: the integer
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
