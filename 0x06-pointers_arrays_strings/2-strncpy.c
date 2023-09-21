#include "main.h"

/**
 *_strncpy - copys a string
 *@dest: string one
 *@src: string two
 *@n: size of bytes
 *Return: concatenate strings
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
