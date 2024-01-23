#include "main.h"
/**
 * print_numbers - prints 0 - 9
 *
 */
void print_numbers(void)
{
	int j;

	j = '0';
	while (j <= '9')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
