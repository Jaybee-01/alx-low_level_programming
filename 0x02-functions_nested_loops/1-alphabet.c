#include <stdio.h>
/**
 *main - entry Point
 *print_alphabet - functions helps to prints the alphabe, in lowercase.
 *
 *Return: 0
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return;
}
