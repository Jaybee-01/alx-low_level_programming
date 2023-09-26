#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (b = 0; b <= size1; b = b + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[b];
	}
	for (b = (size - 1); b < size1; b = b + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[b];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
