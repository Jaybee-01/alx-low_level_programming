#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - this the main block
 *Description: check and prints number
 *that is either positive or negative
 *Return: 0 always
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%i is possitve\n", n);
	}
	else if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	else
	{
	printf("%i is zero\n", n);
	}
	return (0);
}
