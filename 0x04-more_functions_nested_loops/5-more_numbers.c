#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints in 10 places
 *
 */
void more_numbers(void)
{
	int j, n;

	for (n = 0; n <= 10; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
