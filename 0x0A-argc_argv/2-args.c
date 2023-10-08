#include <stdio.h>

/**
 *main - program prints the arguments it receives
 *@argc: number of argument
 *@argv: list of argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
