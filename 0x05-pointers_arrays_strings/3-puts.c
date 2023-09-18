#include "main.h"

/**
 *_puts - function that prints a string, followed by a new lin
 *@str: the string to print
 *Return : void
 */

void _puts(char *str)
{
	*str = 0;

	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');

}
