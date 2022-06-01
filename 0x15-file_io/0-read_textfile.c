#include "main.h"

/**
 * read_textfile - function  reads a text file
 * and prints it to the POSIX standard outpu
 * @filename: The pointer name of the file.
 * @letters: The characters there are in the file.
 *
 * Description: This function reads a text file and prints it to the
 * POSIX standard output.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, lett, iter;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);
	{
		if (file_d == -1)
		{
			return (0);
		}
	}
	lett = read(file_d, buffer, letters);
	{
		if (lett == -1)
		{
			return (0);
		}
	}
	iter = write(STDOUT_FILENO, buffer, lett);
	{
		if (iter == -1)
		{
			return (0);
		}
	}
	close(file_d);
	free(buffer);
	return (iter);
}
