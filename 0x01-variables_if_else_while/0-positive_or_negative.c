#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - The block
 *Desreiption: Get random num and prints
 *if its possitive or negative or zero
 *return: 0 Always
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%1 is possitve\n", n)
	}
	else if (n < 0)
	{
	printf("%i is negative\n", n)
	}
	else
	{
	printf("%i is zero\n", n)
	}
	return (0);
}
