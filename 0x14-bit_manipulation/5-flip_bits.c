#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j, mflips = 0;
	unsigned long int k = sizeof(unsigned long int) * 8;

	for (j = 0; j < k; j++)
	{
		if ((m & 1) != (n & 1))
			mflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (mflips);
}
