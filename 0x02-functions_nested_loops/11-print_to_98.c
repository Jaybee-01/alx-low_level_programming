#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that print number
 * @n: integer variaible
 * Return: success
 */
void print_to_98(int n)
{
	int j = 98;
	if (n <= 98)
	{
		while (n < j)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > j)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
