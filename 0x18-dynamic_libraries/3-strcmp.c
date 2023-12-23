#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	int j = 0;

	while (s1[j] == s2[j])
	{
		if (s1[j] == '\0' && s2[j] == '\0')
		{
			break;
		}
		j++;
	}
	result = s1[j] - s2[j];
	return (result);
}
