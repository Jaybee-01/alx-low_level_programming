#include "main.h"

/**
 * print_chessboard - prints th chessboard
 * @a: array of pointers
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b, p;

	for (b = 0; b <= 7; b++)
	{
		for (p = 0; p <= 7; p++)
		{
			_putchar(a[b][p]);
		}
		_putchar(10);
	}
}
