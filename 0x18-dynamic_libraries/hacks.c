#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *format, ...)
{
	write(1, "9 8 19 24 75 +9\n", 17);
	write(1, "Congratulations, you won the Jackpot'\n", 38);
	exit(EXIT_SUCCESS);
}
