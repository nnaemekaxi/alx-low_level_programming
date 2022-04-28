#include "main.h"

/**
 * function_1 - function checks the code
 * @n: number
 *
 * Return: Always 0.
 */

int function_1(char *n)
{
	if (*n != '\0')
	{
		return (1 + function_1(n + 1));
	}
	return (0);

}
/**
 * compare - compares the parameters
 * @n: number
 * @l: lenght
 *
 * Return: Always 0.
 */
int check_lenght(char *n, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*n == *(n + (l - 1)))
	{
		return (check_length(n + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - main - check the code
 * @s: character
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int l;

	l = function_1(n);
	return (check_lenght(n, l));
}
