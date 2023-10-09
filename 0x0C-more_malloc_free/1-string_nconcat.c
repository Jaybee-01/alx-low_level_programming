#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: size of bytes of s2 to be coppied
 *Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *g;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	g = malloc((size1 + n + 1) * sizeof(char));

	if (g == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		g[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		g[i] = s2[i - size1];
	}
	g[i] = '\0';

	return (g);
}
