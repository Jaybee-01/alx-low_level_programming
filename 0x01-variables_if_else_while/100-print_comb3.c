#include <stdio.h>
/**
 *main - program that prints all possible different combinations of two digits
 *
 *Return: 0
 */

int main(void)
{
	int n = '0';
	int n1 = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			if (!((n == n1) || (n1 > n)))
			{
				putchar(n);
				putchar(n1);
				if (!(n1 == '8' && n == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
