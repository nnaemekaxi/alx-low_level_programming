#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t iter;

	iter = 0;
	while (str[iter])
		iter++;
	return (iter);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t lent = 0;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
		lent = write(file_d, text_content, _strlen(text_content));
	close(file_d);
	if (lent == -1)
		return (-1);
	return (1);
}
