#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number
 * Return: factorial of n and -1 if n < 0 to indicate an error
 */

int factorial(int n)
{
	int p = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	p *= factorial(n - 1);
	return (p);
}
