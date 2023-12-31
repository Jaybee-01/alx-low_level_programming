#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = len + 1;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
