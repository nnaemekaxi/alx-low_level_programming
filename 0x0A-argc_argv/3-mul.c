#include<stdio.h>
#include <stdlib.h>

/**
 * main - prints the function.
 * @argc: counts agruments passed to the function for int.
 * @argv: gives the value passed to the function for char.
 *
 * Return: Returns always success.
**/

int main(int argc, char *argv[])
{
	int x;
	int y = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			y *= atoi(argv[x]);
		}
		printf("%d\n", y);
	}
	return (0);
}
