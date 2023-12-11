#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: source string
 * @b: The constant byte for filling
 * @n: lenght of buffer
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
