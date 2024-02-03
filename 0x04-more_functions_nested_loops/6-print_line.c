#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: input
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; n--)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}

