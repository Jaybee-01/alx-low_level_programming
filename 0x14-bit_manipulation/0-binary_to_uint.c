#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int aint, plant;
	int m;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
		;
	m--;
	for (plant = 1, aint = 0; m >= 0; m--)
	{
		if (b[m] == '0')
		{
			plant *= 2;
			continue;
		}
		else if (b[m] == '1')
		{
			aint += plant;
			plant *= 2;
			continue;
		}
		return (0);
	}
	return (aint);
}
