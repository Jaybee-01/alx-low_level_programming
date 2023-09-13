#include <stdio.h>
/**
 *print_alphabet_x10 - prints alphabets lowercase in 10places
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
