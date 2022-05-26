#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a list
 * @head: The pointer to header node.
 * @n: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the beginning of a
 * listint_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
