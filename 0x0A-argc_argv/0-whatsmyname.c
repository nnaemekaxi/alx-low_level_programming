#include <stdio.h>

/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an agument value for char.
 *Return: Returns always success.
**/

int main(int argc, char *argv[])
{
	int x = argc - argc;

	printf("%s\n", argv[x]);

	return (0);
}
