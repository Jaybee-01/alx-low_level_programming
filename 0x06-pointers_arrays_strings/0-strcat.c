#include "main.h"

/**
 *_strcat - joins two strings together
 *@dest: string one
 *@src: string two
 *Return: concatenate strings
 */
char *_strcat(char *dest, char *src)
{

	int a, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

