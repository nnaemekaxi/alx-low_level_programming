#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a list
 * @head: The pointer address to header node.
 * @str: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *loop = *head;

	new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);

	if (loop == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (loop->next)
		{
			loop = loop->next;
		}
		loop->next = new_node;
	}
	return (new_node);
}
