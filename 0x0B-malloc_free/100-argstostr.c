#include <stdlib.h>
#include "main.h"

/**
* *argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: Pointer to the new string (Success), NULL (Error)
*/
char *argstostr(int ac, char **av)
{
	int j, k, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			l++;
		l++;
	}

	str = (char *)malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	l = 0;

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			str[l] = av[j][k];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	return (str);
}
