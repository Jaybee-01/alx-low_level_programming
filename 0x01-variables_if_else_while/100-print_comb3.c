#include <stdio.h>
/**
 *main - program that prints all possible different combinations of two digits
 *
 *Return: 0
 */

int main(void)
{
	int n, n1;

	for (n = '0'; n < '9'; n++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			if (n == '0' && n1 == '1')
				continue;
			if (n == '1' && n1 == '2')
				continue;
			if (n == '2' && n1 == '3')
				continue;
			if (n == '3' && n1 == '4')
				continue;
			if (n == '5' && n1 == '6')
				continue;
			if (n == '6' && n1 == '7')
				continue;
			if (n == '7' && n1 == '8')
				continue;
			if (n == '8' && n1 == '9')
				continue;
			putchar(n);
			putchar(n1);
			if (n == '8' && n1 < '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
