#include <stdio.h>
/**
 *_islower - check for lowercase letter
 *@c: character to check the case
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
