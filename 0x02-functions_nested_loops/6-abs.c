#include <stdio.h>
/**
 *_abs - functions that computes the value of an integer
 *@x: the input nu,ber to check
 *Return: 0
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}

