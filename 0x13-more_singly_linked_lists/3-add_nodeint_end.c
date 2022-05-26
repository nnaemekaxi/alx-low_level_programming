#include "lists.h"

/**
 * add_nodeint_end - main function
 * @head: The pointer address to header node.
 * @n: Data.
 *
 * Description: This function adds a new node at the end of a listint_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *run = *head;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	if (run == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (run->next)
		{
			run = run->next;
		}
		run->next = new_node;
	}
	return (new_node);
}
