#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int aa;
	int ab;

	int b;
	int ba;
	int bb;

	while (a <= 98)
	{
		aa = (a / 10 + '0');
		ab = (a % 10 + '0');
	b = 0;
	while (b <= 99)
	{
		ba = (b / 10 + '0');
		bb = (b % 10 + '0');

	if (a < b)
	{
		putchar(aa);
		putchar(ab);
		putchar(' ');
		putchar(ba);
		putchar(bb);

	if (a != 98)
	{
		putchar(',');
		putchar(' ');
	}
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
