#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	int j = 98;

	if (n <= 98)
	{
		while (n < j)
			printf("%d, ", n++);
		printf("%d\n", n);
	} else {
		while (n > j)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
