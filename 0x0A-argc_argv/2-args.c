#include <stdio.h>

/**
 * main - prints the function.
 * @argc: is argument counter to an int.
 * @argv: is an agument value determiner for char.
 *
 * Return: Returns always success.
**/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);

}
