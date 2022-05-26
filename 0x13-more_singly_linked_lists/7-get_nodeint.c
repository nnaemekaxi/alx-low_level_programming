#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a list
 * @head: Pointer to the head node.
 * @index: The index of the node.
 *
 * Description: This function the nth node of a linked list.
 *
 * Return: The nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head)
	{
		while (x != index && head)
		{
			head = head->next;
			x++;
		}
		return (head);
	}
	return (NULL);
}
