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
		for (n1 = '0'; n1 < '9'; n1++)
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
			if (n1 == '1' && n == '0')
				break;
			if (n1 == '2' && n == '1')
				break;
			if (n1 == '3' && n == '2')
				break;
			if (n1 == '4' && n == '3')
				break;
			if (n1 == '5' && n == '4')
				break;
			if (n1 == '6' && n == '5')
				break;
			if (n1 == '7' && n == '6')
				break;
			if (n1 == '8' && n == '7')
				break;
			if (n1 == '9' && n == '8')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
