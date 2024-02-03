#include <stdio.h>
#include "main.h"
/**
 *
 *
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

