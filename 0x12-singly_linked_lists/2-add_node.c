#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list
 * @str: string to add in the node
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int x = 0;

	while (str[x])
		x++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->x = x;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
