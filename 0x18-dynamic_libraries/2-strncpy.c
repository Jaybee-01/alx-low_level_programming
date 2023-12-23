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

	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	for (a = 0; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
