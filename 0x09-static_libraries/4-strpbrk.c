#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, p;

	for (a = 0; *(s + a); a++)
	{
		for (p = 0; (accept + p); p++)
		{
			if (*(s + a) == *(accept + p))
			{
				break;
			}
		}
		if (*(accept + p) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
