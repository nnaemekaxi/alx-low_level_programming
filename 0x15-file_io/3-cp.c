#include "main.h"
#include <stdio.h>

/**
 * error_reader - function reads file.
 * @err: Error number
 * @filename: File name
 */
void error_reader(int err, char *filename)
{
	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * file_copier - function copies the content of a file to another file
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 *
 * Return: 1 on success, -1 on failure.
 */
void file_copier(char *file_from, char *file_to)
{
	int file_read, x_read, file_write, x_write;
	char *buffer[1024];

	/* READ */
	file_read = open(file_from, O_RDONLY);
	if (file_read < 0)
		error_reader(98, file_from);
	/* WRITE */
	file_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_write < 0)
	{
		close(file_read);
		error_reader(99, file_to);
	}
	do {
		/* READ */
		x_read = read(file_read, buffer, 1024);
		if (x_read < 0)
			error_reader(98, file_from);
		/* WRITE */
		x_write = write(file_write, buffer, x_read);
		if (x_write < x_read)
			error_reader(99, file_to);
	}	while (x_write == 1024);
	if (close(file_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_read);
		close(file_write);
		exit(100);
	}
	if (close(file_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: Argument count
 * @argv: argument values
 *
 * Return: 0 on success, -1 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copier(argv[1], argv[2]);
	return (0);
}
