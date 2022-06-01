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
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t lent;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
		lent = write(file_d, text_content, _strlen(text_content));
	close(file_d);
	if (lent == -1)
		return (-1);
	return (1);
}
