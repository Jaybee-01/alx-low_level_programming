#include "variadic_functions.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int j;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
