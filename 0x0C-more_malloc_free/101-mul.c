#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @size: size of string
 *
 * Return: void
 */
void _print(char *str, int size)
{
	int x, y;

	x = y = 0;
	while (x < size)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == size - 1)
			_putchar(str[x]);
		x++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int x, y, multi, multipl, add, addit;

	multipl = addit = 0;
	for (x = num_index, y = dest_index; x >= 0; x--, y--)
	{
		multi = (n - '0') * (num[x] - '0') + multipl;
		multipl = multi / 10;
		add = (dest[y] - '0') + (multi % 10) + addit;
		addit = add / 10;
		dest[y] = add % 10 + '0';
	}
	for (addit += multipl; y >= 0 && addit; y--)
	{
		add = (dest[y] - '0') + addit;
		addit = add / 10;
		dest[y] = add % 10 + '0';
	}
	if (addit)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * confirm_digits_input - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int confirm_digits_input(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * initialize - initializes a string
 * @str: sting to initialize
 * @len: length of strinf
 *
 * Return: void
 */
void initialize(char *str, int len)
{
	int x;

	for (x = 0; x < len; x++)
		str[x] = '0';
	str[x] = '\0';
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int x, xx, y, yy, z;
	char *ptra;
	char *ptrb;
	char e[] = "Error\n";

	if (argc != 3 || confirm_digits_input(argv))
	{
		for (yy = 0; e[yy]; yy++)
			_putchar(e[yy]);
		exit(98);
	}
	for (x = 0; argv[1][x]; x++)
		;
	for (xx = 0; argv[2][xx]; xx++)
		;
	y = x + xx + 1;
	ptra = malloc(y * sizeof(char));
	if (ptra == NULL)
	{
		for (yy = 0; e[yy]; yy++)
			_putchar(e[yy]);
		exit(98);
	}
	initialize(ptra, y - 1);
	for (yy = xx - 1, z = 0; yy >= 0; yy--, z++)
	{
		ptrb = mul(argv[2][yy], argv[1], x - 1, ptra, (y - 2) - z);
		if (ptrb == NULL)
		{
			for (yy = 0; e[yy]; yy++)
				_putchar(e[yy]);
			free(ptra);
			exit(98);
		}
	}
	_print(ptra, y - 1);
	return (0);
}
