#include <stdio.h>
#include "main.h"

/**
 * main - program that prints a function
 * @argc: number of argument
 * @argv: list of argumentt
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
