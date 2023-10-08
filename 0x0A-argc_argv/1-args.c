#include <stdio.h>

/**
 *main - program
 *@argc: number of argument
 *@argv: list of argument
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
