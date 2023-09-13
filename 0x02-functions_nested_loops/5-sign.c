#include <stdio.h>
/**
 *print_sign - fucntion that prints the sign of a number
 *@n: the input to check
 *Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar(43);
	
	}
	else if (n < 0)
	{
		return (-1);
		putchar (45);
	}
	else
	{
		putchar (48);
		return (0);
	}
}
