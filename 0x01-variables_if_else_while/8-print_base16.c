#include <stdio.h>
/**
 *main - program that prints all the numbers of base 16 in lowercase
 *
 *Return: 0
 */

int main(void)
{
int n = 48;
int l = 'a';
while (n <= 57)
{
putchar(n);
n++;
}
while (l <= 'f')
{
putchar(1);
l++;
}
putchar('\n');
return (0);
}
