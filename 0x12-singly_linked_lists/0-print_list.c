#include "lists.h"

/**
 * print_list- function prints list of string
 * @h: Pointer to the string.
 *
 * Description: This function prints all the elements of a list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t iter = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		iter++;
	}
	return (iter);
}

/**
 * _strlen - function checks code.
 * @str: Pointer that loops through the string.
 *
 * Description: This function counts the length of a string.
 *
 * Return: length of string.
 */
int _strlen(char *str)
{
	int x = 0;

	while (str == NULL)
	{
		return (0);
	}

	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
