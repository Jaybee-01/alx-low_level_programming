#include "main.h"

/**
 *print_last_digit - function that prints last digit
 *@n: the inpuit number to check
 *Return: 0
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
