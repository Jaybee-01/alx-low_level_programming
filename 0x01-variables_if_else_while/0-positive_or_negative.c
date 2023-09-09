#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main: main block
 *Description: gets and check number
 *if its positive or not
 *return 0 always
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
