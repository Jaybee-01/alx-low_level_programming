#include <stdio.h>
#include "main.h"

/**
 *print_sign - fucntion that prints the sign of a number
 *@n: the input to check
 *Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n  < 0)
	{
		_putchar ('-');
		return (1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
