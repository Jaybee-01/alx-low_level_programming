#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: source string
 * @accept: searching string
 * Return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, p;

	for (p = 0; *(s + p); p++)
	{
		for (a = 0; *(accept + a); a++)
		{
			if (*(s + p) == *(accept + a))
				break;
		}
		if (*(accept + a) == '\0')
			break;
	}
	return (p);
}
