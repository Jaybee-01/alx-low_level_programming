#include "main.h"

/**
 *_strncat - joins two strings together
 *@dest: string one
 *@src: string two
 *@n: maximum bytes
 *Return: concatenate strings
 */

char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j = 0;

	for (i = 0 ; i < j && j < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
		j++;
		dest[i] = '\0';
	}
	return (dest);
}
