#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - cheks the fuction.
 * @argc: couts the arguments passed to the function.
 * @argv: gives the value for the argument passed to the function.
 *
 * Return: Returns always success.
 */

int main(int argc, char *argv[])
{
	int sum;
	int count;
	int x;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (x = 0; argv[count][x] != '\0'; x++)
		{
			if (!(isdigit(argv[count][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
