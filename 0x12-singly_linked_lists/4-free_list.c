#include "lists.h"

/**
 * free_list - function frees a lsit
 * @head: The pointer address to header node.
 *
 * Description: This function frees a list_t list.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *new_node, *num;

	if (!head)
	{
		return;
	}

	new_node = head;
	while (new_node)
	{
		num = new_node->next;
		free(new_node->str);
		free(new_node);
		new_node = num;
	}
}
