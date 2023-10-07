#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to memory destination
 * @src: pointer to memory source
 * @n: lenght of buffer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
