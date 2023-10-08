#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints a function
 * @argc: integer that counts
 * @argv: string that accepts a function
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
